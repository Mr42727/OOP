#include<iostream>
using namespace std;
int main()
{
    int int_arr[5]={32,34,55,44,55};
    for(int i=0; i<=4;i++)
    // cout<<int_arr[i];
    cout<<*(int_arr+i)<<endl;
    return 0;
}