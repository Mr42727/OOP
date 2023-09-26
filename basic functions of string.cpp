//basic function of string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1("man");
	string s2="beast";
	string s3;
	s3=s1;
	cout<<"s3="<<s3<<endl;
	//+ operator as a concatination
	s3="neither"+s1+" nor ";
	s3+=s2;
	cout<<"s3= "<<s3<<endl;
	//using basic function of string
	s1.swap(s2);
	cout<<"s1="<<s1<<endl;
	cout<<"s2="<<s2<<endl;
		
	return 0;
	
}
