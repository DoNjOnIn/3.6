#pragma once
#include <iostream>
using namespace std;
class B3
{
private:
	int b3;
public:
	B3() { b3 = 300; };
	B3(int x) { b3 = x; };
	~B3() {};
	void show_B3()
	{
		cout << "class B3:" << endl;
		cout << "show_B3()" << endl
			<< "B3::b3 = " << b3 << endl << endl;
	}
};


