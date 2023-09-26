#include<iostream>
using namespace std;
void centimize(double *);
int main()
{
	double var=10.0;
	cout<<var<<"inches"<<endl;
	centimize(&var);
	cout<<"var :"<<var<<"centimeter"<<endl;
	return 0;
	
}
void centimize(double *x)
{
	*x*=2.54;
}
