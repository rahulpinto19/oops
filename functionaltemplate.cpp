#include<stdio.h>
#include<iostream>
using namespace std;
template<typename t>t maxnum(t a,t b)
{
    return (a>b)?a:b;
}
int main()
{
    cout<<maxnum<int>(5,6)<<endl;
    cout<<maxnum<double>(5,6)<<endl;
    cout<<maxnum<char>('z','*')<<endl; 
}
