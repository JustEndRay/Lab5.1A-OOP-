#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "Exception.h"
using namespace std;
class IntPower
{
private:
	double first;
	int second;
public:
	IntPower();
	IntPower(double, int);
	IntPower(const IntPower&);

	void SetFirst(double);
	void SetSecond(int);

	double GetFirst() const;
	int GetSecond() const;

	IntPower& operator = (const IntPower&);
	friend istream& operator >> (istream&, IntPower&) throw(const char*, bad_exception&);
	friend ostream& operator << (ostream&, const IntPower&);
	operator string() const;

	IntPower& operator ++ ();
	IntPower& operator -- ();
	IntPower operator ++ (int);
	IntPower operator -- (int);

	double power();
};

