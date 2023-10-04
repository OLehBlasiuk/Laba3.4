//Lab_03_4.cpp
//<Власюк Олег>
//Лабораторна робота № 3.4
//Розгалуження, задане графіком функції.
// Варіант5
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double y;
	double x;
	double R;
	cout << "R="; cin >> R;
	cout << "x="; cin >> x;
	cout << "y="; cin >> y;
	if (((y * y <= R * R - x * x) && (x > 0 && y > 0)) || ((y * y <= R * R - x * x) && (x <= 0 && y <= 0)) ||
		(y <= R + x) && (x < 0 && y>0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
