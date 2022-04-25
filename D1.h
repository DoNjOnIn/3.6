#include "B1.h"
#include "B2.h"
#include "B3.h"
#pragma once
class D1: public B1 , public B2, private B3
{
private:
	int d1;
public:
	D1() { d1 = 400; };
	D1(int a, int b, int c, int d);
	~D1(){}
	void show_D1()
	{
		cout << "class D1:" << endl;
		cout << "show_D1()" << endl;
		cout << "D1::d1 = " << d1 << endl;
	}
	void show_B3()
	{
		B3::show_B3();
	}
};

