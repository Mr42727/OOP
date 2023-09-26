#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<"ptr="<<ptr<<endl;
    cout<<"value at ptr (*ptr)="<<*ptr<<endl;
    return 0;
}