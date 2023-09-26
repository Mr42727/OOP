#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class String 
{
	private:
		enum{ max=100};
		char str[max];
		public:
			String()
			{
				str[0]='\0';
				
			}
			String (char s[])
			{
			strcpy(str,s);
			}
			void display()
			{
				cout<<str<<endl;
			}
			void concat(String s2)
			{
				if (strlen(str)+strlen(s2.str)<max)
				strcat(str,s2.str);
				else
				cout<<"too long";
				
			}
};
int main()
{
	String s1="hello";
	String s2=" saamir";
	String s3;
	s3=s1;
	s1.display();
	s2.display();
	s3.concat(s2);
	s3.display();
}
