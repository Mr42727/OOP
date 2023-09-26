#include<iostream>
#include<string.h>
using namespace std;
class myinfo{
	private:
	char name[40]; 
	char address[30];
	char department[50];
	int age;
	int rollnumber;
	public:
		  void myname()
		{
			cout<<"enter your name"<<endl;
			gets(name);
		}
		 void myaddress()
		{
				cout<<"enter your address"<<endl;
			gets(address);
		}
		 void myage()
		{
				cout<<"enter your age"<<endl;
			cin>>age;
		}
		 void myrollnumber()
		{
				cout<<"enter your rollnumber"<<endl;
			cin>>rollnumber;
		}
		 void mydepartment()
		{
				cout<<"enter your name of department"<<endl;
			cin>>department;
		}
	 void showmyinfo()
		{
				cout<<"your name is : "<<name<<endl;
				cout<<"your address is : "<<address<<endl;
				cout<<"your age is : "<<age<<"years"<<endl;
				cout<<"your rollnumber is : "<<rollnumber<<endl;
				cout<<"your department name is : "<<department<<endl;
		}
};
int main()
{

	myinfo nasrullah;
	nasrullah.myname();
	nasrullah.myaddress();
	nasrullah.myage();
	nasrullah.myrollnumber();
	nasrullah.mydepartment();
	nasrullah.showmyinfo();
	return 0;
}
