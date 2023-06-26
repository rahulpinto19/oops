#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;
class rahul
{

public:
    int a, b;
    rahul(int x, int y)
    {
        a = x;
        b = y;
    }
    rahul()
    {
        a = 0;
        b = 0;
    }
    rahul operator+(rahul &d2)
    {
        rahul d;
        d.a = this->a + d2.a;
        d.b = this->b + d2.b;
        return d;
    }
};
int main()
{
    rahul d1(1, 2), d2(2, 3), d;
    d = d1 + d2;
    cout << d.a << "and" << d.b << endl;
}
