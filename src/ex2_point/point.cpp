
#include "point.h"

Point addPoint(const Point& p1, const Point& p2)
{
    Point p = {
                p1.x + p2.x,
                p1.y + p2.y
              };

    return p;
}
