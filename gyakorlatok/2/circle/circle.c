#include "circle.h"
#include <math.h>

#ifndef M_PI
	#define M_PI 3.14159265358979323846
#endif

void set_circle_data(Circle* circle, double x, double y, double radius, int r, int g, int b)
{
	circle->x = x;
	circle->y = y;
	if (radius > 0.0) 
	{
		circle->radius = radius;
	} 
	else 
	{
		circle->radius = NAN;
	}
	circle->color.r = r;
	circle->color.g = g;
	circle->color.b = b;
}

double calc_circle_area(const Circle* circle)
{
	double area = circle->radius * circle->radius * M_PI;
	return area;
}