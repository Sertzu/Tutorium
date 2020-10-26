//
//  polar.cpp
//
//  Einfuehrung in die Programmierung II - JKU Linz
//

#define PI 3.141592
#include "polar.hpp"
#include <math.h>

double polar_angle(double x, double y, int * ierr) {
	if (x > 0)
		if (y >= 0)
			return atan(y / x);
		else
			return atan(y / x) + 2 * PI;
	if (x < 0)
		return atan(y / x) + PI;
	else
	{
		if (y > 0)
			return PI / 2;
		if (y < 0)
			return 3 * PI / 2;
	}
	return 0;

}
double polar_r(double x, double y, int * ierr) {
	return sqrt(x * x + y * y);
}
