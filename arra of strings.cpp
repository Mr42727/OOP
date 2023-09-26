//array of string

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
	const int days=7;//total array
	const int max=10;//size or name of days contain 10 characters
	char star[days][max]={"mon",
	"tue",
	"wed",
	"thur",
	"fri",
	"sat",
	"sun"};
		for(int i=0;i<days;i++)//no need for 2 loops
		{
			cout<<star[i]<<endl;
		}
	return 0;
}
