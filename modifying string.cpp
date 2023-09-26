//modiyfing the c string

#include<iostream>
#include<string>
using namespace std;
int main()
{



string s1("quick! send for count graystone.");
string s2("lord");
string s3("dont ");
s1.erase(0,7);//it will erase quick!_ and we have left "send.....tone."
s1.replace(9,5,s2);//it will replcce the count which is at 9 index of(left string)
cout<<"S1="<<s1<<endl;
s1.replace(0,1,"S");//it will replace the first character of string which is s to S
cout<<"S1="<<s1<<endl;
s1.insert(0,s3);//it will add the s3 on first index
s1.erase(s1.size()-1,1);//it will erase the last character "!".
s1.append(3,'!');//it will append ! at last 3 times
int x=s1.find(' ');
while (x<s1.size())
{
	s1.replace(x,1,"/");
	x=s1.find(' ');
	
}
cout<<"s1="<<s1;
}


