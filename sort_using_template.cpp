#include<stdio.h>
#include<iostream>
using namespace std;
template<typename r>r sorting(r *arr,int n)
{
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        if(arr[i]>arr[j])
        swap(arr[i],arr[j]);
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    char ar[5]={'a','e','t','a','h'};
    sorting<int>(arr,5);
    sorting<char>(ar,5);
    for(int k:arr)
    cout<<k<<",";
    cout<<endl;
    for(auto k:ar)
    cout<<k;
    return 0;
}
