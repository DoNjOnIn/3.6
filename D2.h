#pragma once
#include "D1.h"
#include"B3.h"
class D2 :
    public D1
{
private:
	int d2;
public:
	D2() { d2 = 500; };
	D2(int a, int b, int c, int d, int e);
	~D2() {}
	void show_D2()
	{
		cout << "class D2:" << endl;
		cout << "show_D2()" << endl;
		cout << "D2::d2 = " << d2 << endl;
	}
	void show_B3()
	{
		D1::show_B3();
	}
};

