#include<iostream>
#include<string>
using namespace std;
int main()
{
	string full_name,nick_name,address;
	string greeting("hello");
	cout<<"enter your full name:\n";
	getline(cin,full_name);
	cout<<"your full name is : "<<full_name;
	cout<<"\nenter your nick name";
	getline(cin,nick_name);
	greeting+=nick_name;
	cout<<greeting<<endl;
	cout<<"enter your full address : \n";
	getline(cin,address);
	cout<<"address="<<address;
	return 0;
}
