#ifndef COORDINATE_H
#define COORDINATE_H

struct Coordinate
{
public:
    Coordinate() : _x(0), _y(0) {}
    Coordinate(int x, int y) : _x(x), _y(y) {}
    int x() { return _x; }
    int y() { return _y; }

    void x(int newX) { _x = newX; }
    void y(int newY) { _y = newY; }

private:
    int _x;
    int _y;
};

#endif // COORDINATE_H
