#include "mazeSolver.h"
#include <iostream>
#include <QCoreApplication>
#include <QThread>

std::vector<CPoint> mazeSolver::m_neighbors{{1,0},{0,1},{-1,0},{0,-1}};

mazeSolver::mazeSolver(const size_t rows,const size_t cols, const QGraphicsView *view, const int startX, const int startY, const int endX, const int endY)
    :  m_rows(rows), m_cols(cols)
{
    resetMaze();

    m_start = CPoint{startX,startY};
    m_target = CPoint{endX,endY};

    // initializing the m_items vector with rectItems
    size_t cellSize = std::min(view->width() / m_cols , view ->height() / m_rows);
    for(size_t i = 0; i < m_rows; ++i)
    {
        for(size_t j = 0; j < m_cols; ++j)
        {
            m_items[i][j] = new QGraphicsRectItem(j * cellSize, i * cellSize, cellSize, cellSize);
        }
    }
}

void mazeSolver::generate_maze()
{
    for(size_t i = 0; i < m_rows - 1; ++i)
    {
        for(size_t j = 0; j < m_cols - 1; ++j)
        {
            if(arc4random() % 10 < 2)
            {
                m_maze[i][j] = '#'; // set cell to wall
            }
        }
    }
    m_maze[m_start.x()][m_start.y()] = '0';
    m_maze[m_target.x()][m_target.y()] = '0';
}

void mazeSolver::print_maze() const{
    for(const auto &row : m_maze)
    {
        for(const auto &col : row)
        {
            std::cout << col << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void mazeSolver::resetMaze_colors()
{
    for (size_t i = 0; i < m_rows; i++) {
        for (size_t j = 0; j < m_cols; j++) {
            if (m_maze[i][j] == '#') {
                m_items[i][j]->setBrush(QBrush(Qt::black));
            }
            else{
                m_items[i][j]->setBrush(QBrush(Qt::white));
            }
        }
    }
}

// Function to display the maze
void mazeSolver::display_maze(QGraphicsView* view){
    QGraphicsScene* scene = new QGraphicsScene(view);
    view->setScene(scene);

    // Create a QGraphicsRectItem for each cell in the maze
    for (size_t i = 0; i < m_rows; i++) {
        for (size_t j = 0; j < m_cols; j++) {
            if (m_maze[i][j] == '#') {
                m_items[i][j]->setBrush(QBrush(Qt::black)); // Set color to black for walls
            } else if (m_visited[i][j]) {
                m_items[i][j]->setBrush(QBrush(Qt::green)); // for visited spaces
            }
            else{
                m_items[i][j]->setBrush(QBrush(Qt::white)); // Set color to white for open spaces
            }
            scene->addItem(m_items[i][j]);
        }
    }
    print_maze();
}

bool mazeSolver::bfs()
{
    std::queue<CPoint> q;
    q.push(m_start);

    m_visited[m_start.x()][m_start.y()] = true;
    m_parent[m_start.x()][m_start.y()] = {-1,-1};

    QElapsedTimer timer;
    timer.start();

    while(!q.empty())
    {
        CPoint current = q.front();
        q.pop();

        if(current == m_target)
        {
            std::cout << "SOLUTION FOUND" << std::endl;
            resetMaze_colors();
            display_solution();
            return true;
        }

        for(const auto& point : m_neighbors)
        {
            CPoint next_point = current + point;
            if(next_point.valid(m_rows,m_cols) && !m_visited[next_point.x()][next_point.y()] && m_maze[next_point.x()][next_point.y()] != '#')
            {
                q.push(next_point);
                m_visited[next_point.x()][next_point.y()] =  true;
                m_parent[next_point.x()][next_point.y()] = current;
                m_items[next_point.x()][next_point.y()]->setBrush(QBrush(Qt::green));
            }
        }

        qint64 elapsed = timer.elapsed();
        if(elapsed < 25)
        {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 15); // process any pending events in the event loop
            QThread::msleep(25 - elapsed); // wait for 25ms before continuing the while loop
        }
        timer.restart();
    }

    std::cout << "SOLUTION NOT FOUND" << std::endl;
    return false;
}

void mazeSolver::display_solution()
{
    std::vector<CPoint> path;
    CPoint current_point = m_target;
    while (current_point != m_start)
    {
        path.push_back(current_point);
        current_point = m_parent[current_point.x()][current_point.y()];
    }
    path.push_back(m_start);
    reverse(path.begin(), path.end());

    for (const auto &p : path)
    {
        m_items[p.x()][p.y()]->setBrush(QBrush(Qt::green));
        std::cout << "(" << p.x() << "," << p.y() << ") ";
    }
    std::cout << "\n[TARGET REACHED IN " << path.size() << " STEPS]" << std::endl;
}

// Function to reset the maze
void mazeSolver::resetMaze() {
    m_maze.clear(); // Clear the maze data structure
    m_maze.resize(m_rows, std::vector<char>(m_cols, '0')); // Resize the maze to the correct dimensions
    m_visited.clear(); // Clear the visited data structure
    m_visited.resize(m_rows, std::vector<bool>(m_cols, false)); // Resize the visited data structure to the correct dimensions
    m_parent.clear(); // Clear the parent data structure
    m_parent.resize(m_rows, std::vector<CPoint>(m_cols)); // Resize the parent data structure to the correct dimensions
    m_items.clear();
    m_items.resize(m_rows,std::vector<QGraphicsRectItem*>(m_cols));
}
