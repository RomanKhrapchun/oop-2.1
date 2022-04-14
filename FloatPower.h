#pragma once
#include<iostream>	
#include<string>

using namespace std;

class FloatPower
{
	double first, second;

public:

	FloatPower();
	FloatPower(double, double);
	FloatPower(const FloatPower&);
	~FloatPower();

	double getFirst() const;
	double getSecond() const;

	void setFirst(double value);
	void setSecond(double value);

	FloatPower& operator = (const FloatPower&);
	operator string() const;

	friend FloatPower operator * (const FloatPower&, const FloatPower&);
	friend FloatPower operator ^ (const FloatPower&, const unsigned);
	friend ostream& operator << (ostream&, const FloatPower&);
	friend istream& operator >> (istream&, FloatPower&);

	double power();

	FloatPower& operator ++();
	FloatPower& operator --();
	FloatPower operator ++(int);
	FloatPower operator --(int);
};

