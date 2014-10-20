/* 
Calculates radius of circle inscribed in triangle,
based on triangle's area and perimeter.

Inputs: Area, Perimeter
*/

#include <stdio.h>
#include "geom.h"

double radius(void)
{

struct point2d a = {2., 2.};
struct point2d b = {-2., 1.};
struct point2d c = {0., -3.};
struct triangle u = {a, b, c};

double perim = perimeter(u);
double ar = area(u);

double rad = 2*ar/perim;
return rad;
}


