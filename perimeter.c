/* Calculates perimeter of triangle 
*/

#include "geom.h"

double perimeter(struct triangle t)
{
    double dab, dbc, dca;
    dab = distance(t.a, t.b);
    dbc = distance(t.b, t.c);
    dca = distance(t.c, t.a);
return (dab + dbc + dca);
}

