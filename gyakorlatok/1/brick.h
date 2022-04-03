#ifndef BRICK_H
#define BICK_H

/**
 * Data of a circle object in Descartes coordinate system
 */
typedef struct Brick
{
	double a;
	double b;
} Brick;

/**
 * Set the data of the circle
 */
void set_brick_data(Brick* Brick, double a, double b);

/**
 * Calculate the area of the circle.
 */
double calc_brick_area(const Brick* brick);

#endif // BRICK_H
