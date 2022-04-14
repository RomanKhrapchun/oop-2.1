#include<iostream>
#include"FloatPower.h"

using namespace std;

int main()
{
	FloatPower b, c, x;

	FloatPower a(1, 1);

	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;

	cout << "Input first" << endl;
	cin >> b;

	cout << "Result: [ " << b.power() << " ];" << endl;

	cin.get();
	return 0;
}