//counting days in year
#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int sum_of_days=0;
	int month=0;
	int days;
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cout<<"enter month to count(1-12)";
	cin>>month;
	if(month>=1 && month<=12)
	{
		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==12)
		{
		cout<<"enter days (1-31)";
		cin>>days;
      	}
		else if(month==4||month==6 || month==9 || month==11)
		{
			cout<<"enter days (1-30)";
			cin>>days;
		}
			else if(month==2)
			{
				cout<<"enter days (1-28)";
				cin>>days;
			}
		
    	
	}
	for(int i=0;i<=month;i++)
	{
		sum+=arr[i];
	}
	sum+=days;
	cout<<"total days of year = "<<sum;
	return 0;
}
