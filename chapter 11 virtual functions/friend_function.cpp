#include<iostream>
using namespace std;
class beta;//we have to declare it here bcz its argument will be used in friend function/
class alpha
{
private:
int data;
public:
alpha():data(4)
{
	
}
	friend int frfunc(alpha,beta);//it will be give the error if we not declared the class beta .
};
class beta{
	private:
		int data;
		public:
			beta():data(9)
			{
			}
			friend frfunc(alpha,beta);
};
int frfunc(alpha a,beta b)
{
	return ( a.data+b.data);
}
int main()
{
	alpha aa;
	beta bb;
	cout<<frfunc(aa,bb)<<endl;
	return 0;
}
