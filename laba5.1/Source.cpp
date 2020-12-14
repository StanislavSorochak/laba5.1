// Lab_05_1.cpp
// < ������� �������� >
// ����������� ������ � 5.1
// ������ 24

#include <iostream>
#include <cmath>

using namespace std;

double f (double a); // ��������

int main()
{
	double x, y;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	double c = (f(3) + f(x + 1.0) + 1) / (1 - f(y + 1) * f(y + 1));

	cout << "c = " << c << endl;

	return 0;
}

double f(const double a) // ����������
{
	return (pow(a, 2) + 1) / (pow(sin(a + 1), 2));
}

