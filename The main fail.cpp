#include "TheHead.h"
int main() {
	setlocale(LC_ALL, "ru");
	ThreeVertex ABC;
	ThreeVertex Dlin;
	double a, b, c, d;
	
	double t1, t2;
	cout << "Введите координаты первой вершины треугольника на плоскости (x1;y1): " << endl;
	cin >> t1 >> t2;
	ABC.SetX1(t1); ABC.SetY1(t2);

	cout << "Введите координаты второй вершины треугольника на плоскости (x2;y2): " << endl;
	cin >> t1 >> t2;
	ABC.SetX2(t1); ABC.SetY2(t2);

	cout << "Введите координаты третьей вершины треугольника на плоскости (x3;y3): " << endl;
	cin >> t1 >> t2;
	ABC.SetX3(t1); ABC.SetY3(t2);

	a = DlinaStoroniAB(ABC, Dlin);
	b = DlinaStoroniBC(ABC, Dlin);
	c = DlinaStoroniAC(ABC, Dlin);
	Dlin.SetAB(a);
	Dlin.SetBC(b);
	Dlin.SetAC(c);

	if (Dlin.Proverka1(Dlin)) {
		cout << "Длины сторон треугольника: " << endl << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;
	}
	else return 0;

	cout <<"Периметр треугольника после перегрузки бинарного оператора \"!\" = "<< !Dlin <<endl;
	cout << "Площадь треугольника после перегрузки бинарного оператора \"&\" = " << &Dlin << endl;

	FourVertex ABCD;
	cout << endl << "P.S. Необходимо ввести координаты четырехугольника в порядке их следования по часовой или против часовой стрелки..." << endl;
	
	cout <<endl<< "Введите координаты первой вершины четырехугольника на плоскости (x1;y1): " << endl;
	cin >> t1 >> t2;
	ABCD.SetX1(t1); ABCD.SetY1(t2);

	cout << "Введите координаты второй вершины четырехугольника на плоскости (x2;y2): " << endl;
	cin >> t1 >> t2;
	ABCD.SetX2(t1); ABCD.SetY2(t2);

	cout << "Введите координаты третьей вершины четырехугольника на плоскости (x3;y3): " << endl;
	cin >> t1 >> t2;
	ABCD.SetX3(t1); ABCD.SetY3(t2);

	cout << "Введите координаты четвертой вершины четырехугольника на плоскости (x4;y4): " << endl;
	cin >> t1 >> t2;
	ABCD.SetX4(t1); ABCD.SetY4(t2);


	a = DlinaStoroniAB(ABCD);
	b = DlinaStoroniBC(ABCD);
	c = DlinaStoroniCD(ABCD);
	d = DlinaStoroniAD(ABCD);
	double diag = DlinaStoroniAC(ABCD);
	Dlin.SetAB(a);
	Dlin.SetBC(b);
	Dlin.SetCD(c);
	Dlin.SetAD(d);
	Dlin.SetAC(diag);

	if (ABCD.Itog(ABCD))
	{
		double Perimetr, Square;
		Perimetr = a + b + c + d;
		double pp = 0.5 * Perimetr;
		Square = sqrt(pp * (pp - a) * (pp - b) * (pp - diag)) + sqrt(pp * (pp - c) * (pp - d) * (pp - diag));
		cout << "Длины сторон четырехугольника: " << endl << "a = " << a << endl << "b = " << b << endl << "c = " << c <<endl<<"d = "<<d<< endl;
		cout << "Периметр четырехугольника = " << Perimetr << endl << "Площадь четырехугольника = " << Square << endl;
	}
	else return 0;
	cout << "Периметр четырехугольника после перегрузки бинарного оператора \"~\" = " << ~Dlin << endl;
	cout << "Площадь четырехугольника после перегрузки бинарного оператора \"++\" = " << ++Dlin << endl;

	return 0;
}
