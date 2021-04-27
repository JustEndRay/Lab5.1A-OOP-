#include <iostream>
#include "IntPower.h"

#include <exception>;
#include <stdexcept>;

int main()
{
	bool init;
	IntPower a;
	do
	{
		try
		{
			init = true;
			cin >> a;
		}
		catch (bad_exception& e)
		{
			init = false;
			cerr << e.what();
		}
	} while (!init);
	cout << a << endl;
	cout << "Power = " << a.power() << endl << endl;
	++a; cout << "++a " << endl << a;
	--a; cout <<"--a "<<endl<< a;

	a++; cout <<"a++ "<<endl<< a;
	a--; cout <<"a-- "<<endl<< a;


	return 0;
}