#include<iostream>
#include "homework7.h"
int main()
{
	float  n;
	cout << "n= ";
	cin >> n;
	int* a = randArr(n);
	cout << "a = ";
	for (int i = 0; i <= n - 1; i++)
	{
		cout << a[i] << ' '; // �����
	}
	cout << endl;

	int* b = randArr(n);
	cout << "b = ";
	for (int i = 0; i <= n - 1; i++)
	{
		cout << b[i] << ' '; // �����
	}
	cout << endl;
	int* c = randArr(n);
	cout << "c = ";
	for (int i = 0; i <= n - 1; i++)
	{
		cout << c[i] << ' '; // �����
	}
	cout << endl;
	int* x = mas(a, b,n);
	int* y = mas(b, c,n);
	cout << "x[]= ";
	for (int i = 0; i <= n - 1; i++)
	{
		cout << x[i] << ' '; // �����
	}
	cout << endl;
	cout << "y[]= ";
	for (int i = 0; i <= n - 1; i++)
	{
		cout << y[i] << ' '; // �����
	}
	cout << endl;
	delete a, b, c;
	return 0;
}