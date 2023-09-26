#include<iostream>
using namespace std;
int main()
{
	int arr[5]={5,4,5,6,7};
	int*ptr;
	ptr=arr;
	for(int i=0;i<=4;i++)
	{
		cout<<*(ptr++)<<endl;
	}
	return 0;
}
