#ifndef POINT_H
#define POINT_H

class CPoint{
private:
    int m_x;
    int m_y;
public:
    CPoint() {}
    CPoint(int x, int y) : m_x(x), m_y(y) {}
    ~CPoint() {}
    int x() const {return m_x;}
    int y() const {return m_y;}

    bool operator==(const CPoint other) const {return m_x == other.m_x && m_y == other.m_y;}
    bool operator!=(const CPoint other) const {return !(*this == other);}
    bool is_target(const CPoint target) const {return *this == target;}
    bool valid(int rows, int cols) const {return m_x >= 0 && m_x < cols && m_y >= 0 && m_y < rows;}
    CPoint operator+(const CPoint other) const {return CPoint(m_x + other.m_x, m_y + other.m_y);}
};

#endif // POINT_H
