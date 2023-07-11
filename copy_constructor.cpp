#include<iostream>
#include<stdio.h>
using namespace std;
class A
{
    int x,y;
    public:
    A()
    {

    }
    A(int a,int b)
    {
        x=a;
        y=b;
    }
    A(A &ref)
    {
        x = ref.x;
        y = ref.y;
        cout<<"copy constructor is called"<<endl;
    }
    void show()
    {
        cout<<"x "<<x<<endl;
        cout<<"y "<<y<<endl;
    }
};
int main()
{
    A a(10,5);
    a.show();
    A b=a;
    // b=a;
    b.show();
    
}
