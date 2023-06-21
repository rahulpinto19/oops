#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    int b;
    
    try
    {
        cin>>a>>b;
       if(b==0)
       throw 0;
       cout<<a/b;
    }
    catch(int x)
    {
        cout<<"division is not possible"<<endl;
    }
    return 0;
}
