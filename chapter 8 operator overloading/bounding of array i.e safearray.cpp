#include<iostream>
using namespace std;
const int LIMIT=100;
class safearr
{
private:
int arr[LIMIT];
public:
void putel(int n, int elvalue)	
{
	if(n>=0&&n<LIMIT)
	{
	arr[n]=elvalue;
	}
	else
{
	cout<<"out of index/bound";
	exit(1);
}
}
int getel(int n)
{
	if(n<0||n>=LIMIT)//n>=LIMIT
	{
		cout<<"out of bound";
		exit(1); 
	}
	return arr[n];
}
};
int main()
{
	safearr sa;
	for(int i=0;i<LIMIT;i++)
	{
		sa.putel(i,i*10);
	}
	for(int j=0;j<LIMIT;j++)
	{
		cout<<sa.getel(j)<<endl;
	}
}
