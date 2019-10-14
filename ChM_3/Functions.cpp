#include <cmath>
#include "DU_Struct.h"

double f(double x, double u, DU d)
{
	return (d.E0*sin(d.w*x) - d.R*u)/d.L;
}

double xInc(double x, double h)
{
	return x + h;
}

double RK4(double x, double vn, double h, DU d)
{
	double vn1, k1, k2, k3, k4;

	k1 = f(x, vn, d);
	k2 = f(x + (h / 4.0), vn + (h / 4.0)*k1, d);
	k3 = f(x + (h / 2.0), vn + (h / 2.0)*k2, d);
	k4 = f(x + h, vn + (h / 2.0)*(k1 - 2 * k2 + 2 * k3), d);
	vn1 = vn + (h / 6.0)*(k1 + 4 * k3 + k4);

	return vn1;
}

double Vn1cap(double xn, double vn, double h, DU d)
{
	double vn2, xn2, vn1cap;

	vn2 = RK4(xn, vn, h / 2.0, d);
	xn2 = xInc(xn, h / 2.0);
	vn1cap = RK4(xn2, vn2, h / 2.0, d);

	return vn1cap;
}

double CS(double _vn1cap, double _vn1)
{
	return (_vn1cap - _vn1) / 15.0;
}


int LPControl(double S, double Eps)
{	
	if (abs(S) > Eps)
	{
		return -1;
	}
	else
	{
		if (abs(S) < Eps / 32.0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

double Correction( double vn1, double S)
{
	return vn1 + S * 16;
}

double fAcc(double I0, DU d,double x)
{
	return (I0 + ((d.w*d.L*d.E0) / (pow(d.R, 2) + pow(d.L, 2)*pow(d.w, 2))))*exp(-x*d.R / d.L) + (d.E0*d.R*sin(d.w*x)-d.w*d.L*d.E0*cos(d.w*x)) / (pow(d.R, 2) + pow(d.L, 2)*pow(d.w, 2));
}