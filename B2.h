#pragma once
#include <iostream>
using namespace std;
class B2
{
private:
	int b2;
public:
	B2() { b2 = 200; };
	B2(int x) { b2 = x; };
	~B2() {};
	void show_B2()
	{
		cout << "class B2:" << endl;
		cout << "show_B2()" << endl
			<< "B2::b2 = " << b2 << endl << endl;
	}
};
