#include <cmath>
#include "DU_Struct.h"

double f(double x, double u, DU d)
{
	return d.E0*sin(d.w*x) - d.R*u;
}

double xInc(double x, double h)
{
	return x + h;
}

double RK4(double x, double vn, double h, DU d)
{
	double vn1, k1, k2, k3, k4;

	k1 = f(x, vn, d);
	k2 = f(x + (h / 4), vn + (h / 4)*k1, d);
	k3 = f(x + (h / 2), vn + (h / 2)*k2, d);
	k4 = f(x + h, vn + (h / 2)*(k1 - 2 * k2 + 2 * k3), d);
	vn1 = vn + (h / 6)*(k1 + 4 * k3 + k4);

	return vn1;
}


int LPControl(double xn, double vn, double vn1, double h, DU d, double Eps)
{
	double S, vn2, xn2,vn1cap;

	vn2 = RK4(xn, vn, h / 2, d);
	xn2 = xInc(xn, h / 2);
	vn1cap = RK4(xn2, vn2, h / 2, d);

	S = (vn1cap - vn1) / 15;

	if (abs(S) > Eps)
	{
		return -1;
	}
	else
	{
		if (abs(S) < Eps / 32)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

double Correction(double xn, double vn, double vn1, double h, DU d)
{
	double S, vn2, xn2, vn1cap;

	vn2 = RK4(xn, vn, h / 2, d);
	xn2 = xInc(xn, h / 2);
	vn1cap = RK4(xn2, vn2, h / 2, d);

	S = (vn1cap - vn1) / 15;

	return vn1 + S * 16;
}