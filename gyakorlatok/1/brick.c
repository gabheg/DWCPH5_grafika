#include "brick.h"

#include <math.h>

void set_brick_data(Brick* brick, double a, double b)
{
	if (a > 0.0 && b > 0.0) {
		brick->a = a;
		brick->b = b;
	} else {
		brick->radius = NAN;
	}
}

double calc_brick_area(const Brick* brick)
{
	double area = brick->a * brick->b;
	return area;
}
