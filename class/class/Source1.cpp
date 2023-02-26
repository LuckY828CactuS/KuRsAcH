#include"Header.h"

void KaK:: znach(double a1, double b1, double c1)
{
	a = a1;
	b = b1;
	c = c1;
}
bool tr()
{
	return ((a + b > c) && (a + c > b) && (c + b > a));
}
double KaK::per()
{
	return p;
}
double KaK::pl()
{
	return s;
}