#include<iostream>
using namespace std;
const int dist=3;
const int month=3;
void display(int [dist][month]);
void change(int [dist][month]);
int main()
{
	int arr[dist][month]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	cout<<"without changing:"<<endl;
	display(arr);
	cout<<"write the elements of array\n";
	change(arr);
	cout<<"with changing:"<<endl;
	display(arr);
	return 0;
}
void display(int abc[dist][month])
{
	for(int i=0;i<dist;i++)
	{
		for(int j=0;j<month;j++)
		{
			cout<<abc[i][j];
		}
		cout<<endl;
	}
}
void change(int abc[dist][month])
{
	for(int i=0;i<dist;i++)
	{
		for(int j=0;j<month;j++)
		{
			cin>>abc[i][j];
		}
		cout<<endl;
	}
}
