/*! \file       ex_2.cpp
 *  \author     Sergey Shershakov
 *  \version    0.1
 *  \date       31.01.2019
 *
 *  Learning structures: Point.
 */

#include <iostream>         // standard headers go first

#include "point.h"          // custom headers go after the standard ones


int main()
{
    Point p;
    p = {30, 40};

    Point p1 {3, 4};        // a modern approach
    Point p2 = {5, 6};

    Point p12sum = addPoint(p1, p2);
    int x1 = p12sum.x;
    int x2 = p12sum.y;

    return 0;
}



















