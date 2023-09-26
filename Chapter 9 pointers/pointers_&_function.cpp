#include<iostream>
using namespace std;
void demo(int&x)
{
	x=x+10;
}
int main()
{
	int a=10;
	cout<<a<<endl;
	demo(a);
	cout<<a;
}
