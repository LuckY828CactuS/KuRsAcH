/*#include"Header.h"
void circle:: set_circle(float r, float x, float y)
{
	rad = r;
	x_cent = x;
	y_cent = y;
}
void circle::set_treug(float a, float b, float c)
{
	a_storona = a;
	b_storona = b;
	c_storona = c;
}
float circle::s()
{
	float p;
	p = (a_storona + c_storona + b_storona) / 2;
	float s = sqrt(p*(p - a_storona)*(p - b_storona)*(p - c_storona));
	return s;
}
bool circle::triangle_around(float a, float b, float c)
{
	float p;
	p = (a_storona + c_storona + b_storona) / 2;
	float s = sqrt(p*(p - a_storona)*(p - b_storona)*(p - c_storona));
	float R;
	R = (a_storona*b_storona*c_storona) / 4 * s;
	return (rad == R);
}
bool circle::triangle_in(float a, float b, float c)
{
	float p;
	p = (a_storona + c_storona + b_storona) / 2;
	float s = sqrt(p*(p - a_storona)*(p - b_storona)*(p - c_storona));
	float R;
	R = s / p;
	return (rad == R);
}
bool circle::check_circle(float r, float x_cntr, float y_cntr)
{
	float l;
	l = sqrt((x_cent - x_cntr)*(x_cent - x_cntr) + (y_cent - y_cntr)*(y_cent - y_cntr));
	return (l < (r + rad));
}
void circle:: set_circle2(float r1, float x1, float y1)
{
	R = r1;
	x_cntr = x1;
	y_cntr = y1;
}*/