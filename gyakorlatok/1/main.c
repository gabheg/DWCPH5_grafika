#include "brick.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	Brick brick;
	double area;
	
	set_brick_data(&brick, 5, 10);
	area = calc_brick_area(&brick);
	
	printf("brick area: %lf\n", area);
	
	return 0;
}
