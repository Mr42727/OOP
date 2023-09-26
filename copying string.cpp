//copying string by mushkil method
#include<iostream>
//#include<conio.h>
//#include<iomanip>
#include<cstring>
using namespace std;
int main()
{
	char str1[]="hello";
	char str2[10];
	int j=0;
	for( j=0;j<strlen(str1);j++)//strlen ignor the null character
	{
		str2[j]=str1[j];
	}
	str2[j]='\0';//for last index null character
	cout<<str1<<endl<<str2;
}
