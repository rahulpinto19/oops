#include<stdio.h>
#include<iostream>
using namespace std;
template<class t>class arr
{
    int size,pos;   
    t* ptr;
    public:
    arr(int s);
    void print();
    void insert(int val);
    void rev();
    bool find(int val);
};
template<class t>arr<t>::arr(int s)//here there is no return type as the constructor does not consist of any return type
{
    ptr=new t[s];
    size=s;
    pos=0;
}
template<class t>void arr<t>::insert(int val)
{
    if(pos<size)
    {ptr[pos]=val;
    pos++;}
    else
    cout<<"arr is full"<<endl;
}
template<class t>void arr<t>::print()
{
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<endl;
    }
}
template<class t>bool arr<t>::find(int val)
{
    for(int i=0;i<size;i++)
    if(ptr[i]==val)
    return 1;
    return 0;
}
template<class t>void arr<t>::rev()
{
    for(int i=0;i<size/2;i++)
    {
        int temp=ptr[i];
        ptr[i]=ptr[size-1-i];
        ptr[size-1-i]=temp;
    }
}
int main()
{
    arr<int>k(3);
    k.insert(1);
    k.insert(2);
    k.insert(8);
    k.insert(5);
    k.insert(6);
    k.rev();
    k.print();
    if(k.find(1))
    cout<<"element found";
    return 0;
}
