#pragma once
using namespace std;
#include "ThreeVertex.h"
class FourVertex :public ThreeVertex {
	double x4, y4;

public:
	void SetX4(double t1);
	void SetY4(double t2);
	friend double DlinaStoroniAB(FourVertex ABCD);
	friend double DlinaStoroniBC(FourVertex ABCD);
	friend double DlinaStoroniCD(FourVertex ABCD);
	friend double DlinaStoroniAD(FourVertex ABCD);
	friend double DlinaStoroniAC(FourVertex ABCD);
	bool function1(FourVertex ABCD);
	bool function2(FourVertex ABCD);
	bool function3(FourVertex ABCD);
	bool function4(FourVertex ABCD);
	bool vectordiag1(FourVertex ABCD);
	bool Itog(FourVertex ABCD);
};
