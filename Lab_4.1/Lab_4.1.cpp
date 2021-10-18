// Lab_4.1.cpp
// < Онишківа Остапа >
// Лабораторна робота No 4.1
// Цикли.
// Варіант 5

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i;
	double P;

	i = 1;
	P = 1;

	while (i<=15)
	{
		P *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) /(i * i) ;
		i++;
	}
	cout << "p1="<<P << endl;

	i = 1;
	P = 1;

	do
	{
		P *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / (i * i);
		i++;
	} while (i<=15);

	cout << "p2=" << P << endl;

	P = 1;

	for (int i = 1; i <= 15; i++)
	{
		P *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / (i * i);
	}
	
	cout << "p3=" << P << endl;

	P = 1;

	for (int i = 15; i>=1; i--)
	{
		P *= (sin(i) * sin(i) + cos(1 / i) * cos(1 / i)) / (i * i);
	}
	
	cout << "p4=" << P << endl;

	return 0;
}