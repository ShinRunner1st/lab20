#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1, Rect *r2)
{
    double x_d = min(r1->x+r1->w, r2->x+r2->w) - max(r1->x, r2->x);
    double y_d = (min(r1->y, r2->y) - max(r1->y-r1->h, r2->y-r2->h));
    double aI = 0;
    if( x_d > 0 && y_d > 0 )
    {
        aI = x_d * y_d;
    }
      
    return (aI);
}