#pragma once
#include "DU_Struct.h"
double f(double x, double u, DU d);
double xInc(double x, double h);
double RK4(double x, double vn, double h, DU d);
double Vn1cap(double xn, double vn, double h, DU d);
double CS(double _vn1cap, double _vn1);
int LPControl(double S, double Eps);
double Correction(double vn1, double S);
double fAcc(double I0, DU d, double x);