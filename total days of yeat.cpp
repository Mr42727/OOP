#include<iostream>
using namespace std;
int main()
{
	int month,total_days=0,days;
	int days_per_year[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cout<<"enter month (1-12):";
	cin>>month;
	if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
		cout<<"enter days (1-31):";
		cin>>days;
	}
	else if (month==4||month==6||month==9||month==11)
	{
		cout<<"enter the days(1-30)";
		cin>>days;
		
	}
	else if (month==2)
	{
		cout<<"enter days from (1-28)";
		cin>>days;
	}
	for(int j=0;j<month;j++)
	{
		total_days+=days_per_year[j];
	}
	cout<<"total days of this year are :"<<total_days;
	return 0;
}
