#include<iostream>
#include<sstream>
#include<string>
#include"FloatPower.h"

FloatPower::FloatPower()
{
	first = 0;
	second = 0;
}

FloatPower::FloatPower(double f = 0, double s = 0)
{
	if (f != 0)
	{
		first = f;
		second = s;
	}
	else
	{
		first = 0;
		second = 0;
	}
}

FloatPower::~FloatPower()
{ }

FloatPower::FloatPower(const FloatPower& r)
{
	first = r.first;
	second = r.second;
}

void FloatPower::setFirst(double r)
{
	first = r;
}

void FloatPower::setSecond(double i)
{
	second = i;
}

FloatPower& FloatPower::operator = (const FloatPower& r)
{
	first = r.first;
	second = r.second;
	return *this;
}


FloatPower::operator string() const
{
	stringstream ss;
	ss << " First = " << first << endl;
	ss << " S2econd = " << second << endl;
	return ss.str();
}

double FloatPower::getFirst() const
{
	return first;
}
double FloatPower::getSecond() const
{
	return second;
}

FloatPower operator * (const FloatPower& x, const FloatPower& y)
{
	return FloatPower(x.first * y.first - x.second * y.second,
		x.first * y.second + x.second * y.first);
}

ostream& operator << (ostream& out, const FloatPower& r)
{
	out << string(r);
	return out;
}

FloatPower operator ^ (const FloatPower& x, const unsigned n)
{
	FloatPower y(1, 0);
	for (unsigned i = 1; i <= n; i++)
		y = y * x;
	return y;
}

istream& operator >> (istream& in, FloatPower& r)
{
	cout << " First = "; in >> r.first;
	cout << " Second = "; in >> r.second;
	cout << endl;
	return in;
}

double FloatPower::power()
{
	double a;

	a = pow(first, second);

	return a;
}

FloatPower& FloatPower::operator ++()
{
	first++;
	return *this;
}

FloatPower& FloatPower::operator --()
{
	first--;
	return *this;
}

FloatPower FloatPower::operator ++(int)
{
	FloatPower t(*this);
	second++;
	return t;
}

FloatPower FloatPower::operator --(int)
{
	FloatPower t(*this);
	second--;
	return t;
}