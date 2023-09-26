//name , nickname , address

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string full_name,nickname,address;
	string greeting("hello,");
	cout<<"enter full name:\n";
	getline(cin,full_name);//same to the cin.get and it allows the spaces
	cout<<"enter the nickname:";
		cin>>nickname;
		greeting+=nickname;
		cout<<greeting<<"!!!"<<endl;
		cout<<"enter adress on separate line(terminate on $)";
		getline(cin,address,'$');
		cout<<"your address is :\n"<<address;
		return 0;
		
}
