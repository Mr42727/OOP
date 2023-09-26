//comparing and subtracting the string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string aname="imran";
	string username;
	cout<<"enter your first name only\n";
	cin>>username;
	if(username==aname)//A is greater than z. comparing btw the alphabets
	{
		cout<<"greeting imran\n";
	}
	else if(username<aname)
	{
		cout<<"you came before imran\n";
		
	}
	else{
		cout<<"you came after imran\n";
	}
	int n=username.compare(0,2,aname,0,2);//comparing first two characters
	cout<<"the first two letters of your name:\n";
	if (n==0)
	cout<<"match";
	else if(n<0)
	cout<<"came before";
	else
	cout<<"came after";
	cout<<aname.substr(0,2)<<endl;
	//fetching the word by index
	string s="hello how are you";
	cout<<s.substr(6,3);
	
	
	return 0;
}
