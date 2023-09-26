#include<iostream>
using namespace std;
void order(int*,int*);
int main()
{
	int n1=99,n2=44;
	int n3=70,n4=55;
	order(&n1,&n2);
	order(&n3,&n4);
	cout<<"n1="<<n1<<endl;
	cout<<"n2="<<n2<<endl;
	cout<<"n3="<<n3<<endl;
	cout<<"n4="<<n4<<endl;
}
void order(int *num1,int *num2)
{
	if(num1>num2)
	{
		int temp=*num1;
		*num1=*num2;
		*num2=temp;
	}
}
