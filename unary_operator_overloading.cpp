#include<stdio.h>
#include<iostream>
using namespace std;
class rahul
{
    int a,b;
    public:
    rahul(int x,int y)
    {
        a=x;
        b=y;
    }
    void operator-()
    {
        a--;
        b--;
    }
    void print()
    {
        cout<<a<<b;
    }
};
int main()
{
    rahul r(5,6);
    -r;
    r.print();
    return 0;
}
