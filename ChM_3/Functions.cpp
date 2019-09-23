#include "Functions.h"
#include <math.h>

double f(double x, double u, double E0, double w, double R, double L)
{
	double res;
	res = (E0*sin(w*x) - R*u) / L;
	return res;
}