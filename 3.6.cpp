// 3.6.cpp 
#include <iostream>
#include"D2.h"

int main()
{
    B1 o0(777);
    cout << "B1 o0(777);" << endl;
    cout << "sizeof(B) = " << sizeof(B1) << endl;
    cout << endl << "Ієрархія класу B1: " << endl;
    o0.show_B1();

    B2 o1(111);
    cout << "B2 o1(111);" << endl;
    cout << "sizeof(D1) = " << sizeof(B2) << endl;
    cout << endl << "Ієрархія класу B2: " << endl;
    o1.show_B2();

    B3 o2(2000);
    cout << "B3 o2(2000);" << endl;
    cout << "sizeof(D2) = " << sizeof(B3) << endl;
    cout << endl << "Ієрархія класу B3: " << endl;
    o2.show_B3();

    D1 o3(100, 200, 300, 400);
    cout << "D1 o3(100, 200, 300, 400);" << endl;
    cout << "sizeof(D3) = " << sizeof(D1) << endl;
    cout << endl << "Ієрархія класу D1: " << endl;
    o3.show_D1();
    o3.show_B3();

    D2 o4(1, 2, 3, 4, 5);
    cout << "D2 o4(1, 2, 3, 4, 5);" << endl;
    cout << "sizeof(D4) = " << sizeof(D2) << endl;
    cout << endl << "Ієрархія класу D2: " << endl;
    o4.show_D2();
    o4.show_D1();
    o4.show_B3();

}
