#include <stdio.h>
#include <iostream>
using namespace std;
class parent
{
public:
    virtual void  show()
    {
        cout << "this is the show of parent class"<<endl;
    }
    void print()
    {
        cout << "this is the print of the parent class"<<endl;
    }
};
class child : public parent
{
public:
    void show()
    {
        cout << "this is the show of the child class"<<endl;
    }
    virtual void print()
    {
        cout << "this is the print of the child class"<<endl;
    }
};
int main()
{
    parent *bptr;
    child d;
    bptr = &d;

    bptr->parent::show();

    bptr->print();
}
