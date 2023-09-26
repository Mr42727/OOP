#include<iostream>
using namespace std;
void centimize(float*);
int main()
{
    int x=12.9;
    cout<<"x="<<x<<"inches"<<endl;
    centimize(&x);
    cout<<"x="<<x<<"centimeters"<<endl;
    return 0;
}
void centimize(float*z)
{
    *z*=2.54;
}