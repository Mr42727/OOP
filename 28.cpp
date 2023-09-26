#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	const int max=10;
	char ch[max];
	cout<<"enter string\n";
//cin>>setw(max)>>ch;//it will prints the just one word and it will not accept the space
//	cin.get(ch,max);//it will accept the space
	cin.get(ch,max,'$');//it will accept the enter and we can enter multiple lines untill we enter$
	
	cout<<"you entered:\n"<<ch;
	return 0;
}
