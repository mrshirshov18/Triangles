#pragma once
#include <cmath>
#include "FourVertex.h"
using namespace std;

void ThreeVertex::SetX1(double t1) {
	this->x1 = t1;
}
void ThreeVertex::SetX2(double t1) {
	this->x2 = t1;
}
void ThreeVertex::SetX3(double t1) {
	this->x3 = t1;
}
void ThreeVertex::SetY1(double t2) {
	this->y1 = t2;
}
void ThreeVertex::SetY2(double t2) {
	this->y2 = t2;
}
void ThreeVertex::SetY3(double t2) {
	this->y3 = t2;
}
void ThreeVertex::SetAB(double ab) {
	this->AB = ab;
}
void ThreeVertex::SetBC(double bc) {
	this->BC = bc;
}
void ThreeVertex::SetAC(double ac) {
	this->AC = ac;
}
void ThreeVertex::SetCD(double cd) {
	this->CD = cd;
}
void ThreeVertex::SetAD(double ad) {
	this->AD = ad;
}
bool ThreeVertex::Proverka1(ThreeVertex Dlin) {
	if ((Dlin.AB < Dlin.BC + Dlin.AC) && (Dlin.BC < Dlin.AB + Dlin.AC) && (Dlin.AC < Dlin.AB + Dlin.BC)) {
		cout << "Проверка выполнена: треугольник существует." << endl;
		double P, S, pp;
		P = Dlin.AB + Dlin.BC + Dlin.AC;
		pp = P / 2;
		S = sqrt(pp * (pp - Dlin.AB) * (pp - Dlin.BC) * (pp - Dlin.AC));
		cout << "Периметр треугольника = " << P << endl << "Площадь треугольника = " << S << endl;
		return true;
	}
	else {
		cout << "Проверка выполнена: треугольник не существует. Программа не может быть выполнена. Выходим из программы..." << endl;
		return false;
	}
}
double& ThreeVertex::operator!()const {
	double* a = new double(AB + BC + AC);
	return *a;
}
double ThreeVertex::operator&()const {
	double pp = 0.5 * (AB + BC + AC);
	return (sqrt(pp * (pp - AB) * (pp - BC) * (pp - AC)));
}
double& ThreeVertex::operator~()const {
	double* a = new double(AB + BC + CD + AD);
	return *a;
}
double ThreeVertex::operator++()const {
	double pp = 0.5 * (AB + BC + CD + AD);
	return (sqrt(pp * (pp - AB) * (pp - BC) * (pp - AC)) + sqrt(pp * (pp - CD) * (pp - AD) * (pp - AC)));
}



void FourVertex::SetX4(double t1) {
	this->x4 = t1;
}
void FourVertex::SetY4(double t2) {
	this->y4 = t2;
}
bool FourVertex::function1(FourVertex ABCD) {
	double A1 = ABCD.y2 - ABCD.y1;
	double B1 = ABCD.x1 - ABCD.x2;
	double C1 = ABCD.x2 * ABCD.y1 - ABCD.x1 * ABCD.y2;
	if (((A1 * ABCD.x3 + B1 * ABCD.y3 + C1 > 0) && (A1 * ABCD.x4 + B1 * ABCD.y4 + C1 > 0)) || ((A1 * ABCD.x3 + B1 * ABCD.y3 + C1 < 0) && (A1 * ABCD.x4 + B1 * ABCD.y4 + C1 < 0)))
		return true;
	else return false;
}
bool FourVertex::function2(FourVertex ABCD) {
	double A2 = ABCD.y3 - ABCD.y2;
	double B2 = ABCD.x2 - ABCD.x3;
	double C2 = ABCD.x3 * ABCD.y2 - ABCD.x2 * ABCD.y3;
	if (((A2 * ABCD.x4 + B2 * ABCD.y4 + C2 > 0) && (A2 * ABCD.x1 + B2 * ABCD.y1 + C2 > 0)) || ((A2 * ABCD.x4 + B2 * ABCD.y4 + C2 < 0) && (A2 * ABCD.x1 + B2 * ABCD.y1 + C2 < 0)))
		return true;
	else return false;
}
bool FourVertex::function3(FourVertex ABCD) {
	double A3 = ABCD.y4 - ABCD.y3;
	double B3 = ABCD.x3 - ABCD.x4;
	double C3 = ABCD.x4 * ABCD.y3 - ABCD.x3 * ABCD.y4;
	if (((A3 * ABCD.x1 + B3 * ABCD.y1 + C3 > 0) && (A3 * ABCD.x2 + B3 * ABCD.y2 + C3 > 0)) || ((A3 * ABCD.x1 + B3 * ABCD.y1 + C3 < 0) && (A3 * ABCD.x2 + B3 * ABCD.y2 + C3 < 0)))
		return true;
	else return false;
}
bool FourVertex::function4(FourVertex ABCD) {
	double A4 = ABCD.y1 - ABCD.y4;
	double B4 = ABCD.x4 - ABCD.x1;
	double C4 = ABCD.x1 * ABCD.y4 - ABCD.x4 * ABCD.y1;
	if (((A4 * ABCD.x2 + B4 * ABCD.y2 + C4 > 0) && (A4 * ABCD.x3 + B4 * ABCD.y3 + C4 > 0)) || ((A4 * ABCD.x2 + B4 * ABCD.y2 + C4 < 0) && (A4 * ABCD.x3 + B4 * ABCD.y3 + C4 < 0)))
		return true;
	else return false;
}
bool FourVertex::vectordiag1(FourVertex ABCD) {
	char flag;
	double x1 = ABCD.x3 - ABCD.x1;
	double y1 = ABCD.y3 - ABCD.y1;
	double x2 = ABCD.x2 - ABCD.x1;
	double y2 = ABCD.y2 - ABCD.y1;
	double x3 = ABCD.x4 - ABCD.x1;
	double y3 = ABCD.y4 - ABCD.y1;

	double x11 = ABCD.x4 - ABCD.x2;
	double y11 = ABCD.y4 - ABCD.y2;
	double x22 = ABCD.x1 - ABCD.x2;
	double y22 = ABCD.y1 - ABCD.y2;
	double x33 = ABCD.x3 - ABCD.x2;
	double y33 = ABCD.y3 - ABCD.y2;
	cout << "Выберите один из двух вариантов и введите соответвующую цифру:" << endl << "Координаты четырехугольника введены в порядке их следования ПО часовой стрелке - \"1\"" << endl << "Координаты четырехугольника введены в порядке их следования ПРОТИВ часовой стрелке - \"2\"" << endl;
	cin >> flag;
	if (flag == '1') {
		if (((x1 * y2 - x2 * y1) > 0) && ((x1 * y3 - x3 * y1) < 0) && ((x11 * y22 - x22 * y11) < 0) && ((x11 * y33 - x33 * y11) > 0))
		{
			cout << "Проверка №1 четырехугольника выполнена: является выпуклым." << endl;
			return true;
		}
		else {
			cout << "Проверка №1 четырехугольника выполнена: НЕ является выпуклым." << endl;
			return false;
		}
	}
	else if (flag == '2') {
		if (((x1 * y2 - x2 * y1) < 0) && ((x1 * y3 - x3 * y1) > 0) && ((x11 * y22 - x22 * y11) > 0) && ((x11 * y33 - x33 * y11) < 0))
		{
			cout << "Проверка №1 четырехугольника выполнена: является выпуклым." << endl;
			return true;
		}
		else {
			cout << "Проверка №1 четырехугольника выполнена: НЕ является выпуклым." << endl;
			return false;
		}
	}
	else
		while ((flag != '2') || (flag != '1'))
			cout << "Выберите один из предоставленных вариантов";

}
bool FourVertex::Itog(FourVertex ABCD) {
	bool i1, i2, i3, i4, k, point;
	i1 = function1(ABCD);
	i2 = function2(ABCD);
	i3 = function3(ABCD);
	i4 = function4(ABCD);
	k = vectordiag1(ABCD);
	if (i1 && i2 && i3 && i4) {
		cout << "Проверка №2 четырехугольника выполнена: является выпуклым." << endl;
		point = true;
	}
	else {
		cout << "Проверка №2 четырехугольника выполнена: НЕ является выпуклым. Выходим из программы...";
		point = false;
	}

	if (point == k) {
		return point;
	}
}
double DlinaStoroniAB(ThreeVertex ABC, ThreeVertex Dlin) {
	Dlin.AB = sqrt(pow((ABC.x2 - ABC.x1), 2) + pow((ABC.y2 - ABC.y1), 2));
	return (Dlin.AB);
}
double DlinaStoroniBC(ThreeVertex ABC, ThreeVertex Dlin) {
	Dlin.BC = sqrt(pow((ABC.x3 - ABC.x2), 2) + pow((ABC.y3 - ABC.y2), 2));
	return (Dlin.BC);
}
double DlinaStoroniAC(ThreeVertex ABC, ThreeVertex Dlin) {
	Dlin.AC = sqrt(pow((ABC.x3 - ABC.x1), 2) + pow((ABC.y3 - ABC.y1), 2));
	return (Dlin.AC);
}

double DlinaStoroniAB(FourVertex ABCD) {
	double a = sqrt(pow((ABCD.x2 - ABCD.x1), 2) + pow((ABCD.y2 - ABCD.y1), 2));
	return (a);
}
double DlinaStoroniBC(FourVertex ABCD) {
	double b = sqrt(pow((ABCD.x3 - ABCD.x2), 2) + pow((ABCD.y3 - ABCD.y2), 2));
	return (b);
}
double DlinaStoroniCD(FourVertex ABCD) {
	double c = sqrt(pow((ABCD.x4 - ABCD.x3), 2) + pow((ABCD.y4 - ABCD.y3), 2));
	return (c);
}
double DlinaStoroniAD(FourVertex ABCD) {
	double d = sqrt(pow((ABCD.x1 - ABCD.x4), 2) + pow((ABCD.y1 - ABCD.y4), 2));
	return (d);
}
double DlinaStoroniAC(FourVertex ABCD) {
	double diag = sqrt(pow((ABCD.x1 - ABCD.x3), 2) + pow((ABCD.y1 - ABCD.y3), 2));
	return (diag);
}
