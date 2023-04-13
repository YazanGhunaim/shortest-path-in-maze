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
    mazeSolver(const size_t rows,const size_t cols, const QGraphicsView *view);
    mazeSolver(const size_t rows,const size_t cols, const QGraphicsView *view, const int startX, const int startY, const int endX, const int endY);
    size_t rows() const {return m_rows;}
    size_t cols() const {return m_cols;}
    void generate_maze();
    void print_maze() const;
    void resetMaze_colors();
    void display_maze(QGraphicsView* view); // Function to display the maze
    void display_solution();
    bool bfs();
    void resetMaze();
};

#endif // MAZESOLVER_H
