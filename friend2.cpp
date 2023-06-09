//we will be using friend to change the value of the private variable inside the class 
#include<iostream>
#include<stdio.h>
using namespace std;
class class2;
void change(void);
class class1
{
    int a1;
    friend void change(class1 &,class2 &);
    public:
    void setnum(int k)
    {
        a1=k;
    }
    void print(void)
    {
        cout<<"the value of class1 is :"<<a1<<endl;
    }
};
class class2
{
    int a2;
    friend void change(class1 &,class2 &);
    public:
    void setnum(int k)
    {
        a2=k;
    }
    void print(void)
    {
        cout<<"the value of class2 is :"<<a2<<endl;
    }
};
void change(class1 &x,class2 &y)
{
    int temp=x.a1;
    x.a1=y.a2;
    y.a2=temp;
}
int main()
{
    class1 c1;class2 c2;
    c1.setnum(5);
    c2.setnum(100);
    change(c1,c2);
    c1.print();
    c2.print();
    return 0;
}
