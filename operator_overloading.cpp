#include <stdio.h>
#include <iostream>
using namespace std;
class test
{
    int n;

public:
    void get()
    {
        cout << "enter the value of the object" << endl;
        cin >> n;
    }
    void operator==(test t1)
    {
        if (n == t1.n)
            cout << "objects are equal ";
        else
            cout << "objects are not equal";
    }
};
int main()
{
    test t1, t2;
    t1.get();
    t2.get();
    t1 == t2;
    return 0;
}
