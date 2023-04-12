#ifndef MAZESOLVER_H
#define MAZESOLVER_H

#include <vector>
#include <queue>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QBrush>
#include "point.h"

class mazeSolver
{
private:
    std::vector<std::vector<char>> m_maze;
    std::vector<std::vector<bool>> m_visited;
    std::vector<std::vector<CPoint>> m_parent;
    std::vector<std::vector<QGraphicsRectItem *>> m_items;
    size_t m_rows;
    size_t m_cols;

    CPoint m_start;
    CPoint m_target;

public:
    static std::vector<CPoint> m_neighbors;

    mazeSolver() {}
    mazeSolver(int rows, int cols);
    void generate_maze();
    void print_maze() const;
    void display_maze(QGraphicsView* view); // Function to display the maze
    void display_solution();
    bool bfs();
    void resetMaze();
};

#endif // MAZESOLVER_H
