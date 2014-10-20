/*defines structures needed to 
define 2d points and triangles*/

struct point2d 
{
    double x;
    double y;
};

struct triangle
{
    struct point2d a;
    struct point2d b;
    struct point2d c;
};
double perimeter(struct triangle t);
double area(struct triangle t);
double distance(struct point2d u, struct point2d v);
