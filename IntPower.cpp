#include "IntPower.h"
#include <iostream>
#include <cmath>
#include <string>
#include "Exception.h"
IntPower::IntPower()
{
	first = 0;
	second = 0;
}
IntPower::IntPower(double first, int second)
{
	this->first = first;
	this->second = second;
}

IntPower::IntPower(const IntPower& c)
{
	first = c.first;
	second = c.second;
}

void IntPower::SetFirst(double first)
{
	this->first = first;
}
void IntPower::SetSecond(int second)
{
	this->second = second;
}

double IntPower::GetFirst() const { return first; }
int IntPower::GetSecond() const { return second; }

IntPower& IntPower::operator = (const IntPower& c)
{
	first = c.first;
	second = c.second;

	return *this;
}
istream& operator >> (istream& in, IntPower& c) throw(const char*, bad_exception&)
{
	cout << "Enter a First number: "; in >> c.first;
	if (c.first < 0)
		throw bad_exception();
	cout << "Enter a Second number: "; in >> c.second;
	cout << endl;
	return in;
}
ostream& operator << (ostream& out, const IntPower& c)
{
	out << string(c);
	return out;
}
IntPower::operator string() const
{
	stringstream ss;
	ss << "First number = " << first << endl;
	ss << "Second number = " << second << endl;

	return ss.str();

}

IntPower& IntPower::operator ++()
{
	first++;
	return *this;
}
IntPower& IntPower::operator --()
{
	first--;
	return *this;
}
IntPower IntPower::operator ++ (int)
{
	IntPower t(*this);
	second++;
	return t;
}
IntPower IntPower::operator -- (int)
{
	IntPower t(*this);
	second--;
	return t;
}

double IntPower::power()
{
	return pow(first,second);
}

