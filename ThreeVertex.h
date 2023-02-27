#pragma once
#include "FourVertex.h"
#include "TheHead.h"
using namespace std;
class FourVertex;
class ThreeVertex {
protected:
	double x1, y1;
	double x2, y2;
	double x3, y3;
	double AB, BC, AC;
	double CD, AD;

public:
	void SetX1(double t1);
	void SetX2(double t1);
	void SetX3(double t1);
	void SetY1(double t2);
	void SetY2(double t2);
	void SetY3(double t2);
	void SetAB(double ab);
	void SetBC(double bc);
	void SetAC(double ac);
	void SetCD(double cd);
	void SetAD(double ad);

	ThreeVertex() {}
	bool Proverka1(ThreeVertex Dlin);
	double& operator!()const;
	double operator&()const;
	double& operator~()const;
	double operator++()const;
	friend double DlinaStoroniAB(ThreeVertex ABC, ThreeVertex Dlin);
	friend double DlinaStoroniBC(ThreeVertex ABC, ThreeVertex Dlin);
	friend double DlinaStoroniAC(ThreeVertex ABC, ThreeVertex Dlin);
	friend double DlinaStoroniAB(FourVertex ABCD);
	friend double DlinaStoroniBC(FourVertex ABCD);
	friend double DlinaStoroniCD(FourVertex ABCD);
	friend double DlinaStoroniAD(FourVertex ABCD);
	friend double DlinaStoroniAC(FourVertex ABCD);
};
