#include<iostream>
#include<string.h>
using namespace std;
class String
{
	private:
		enum{size=100
		};
		char str[size];
		public:
			String()
			{
				str[0]='\0';
			}
			String(char s[])
			{
				strcpy(str,s);
			}
			void display()
			{
				cout<<str;
			}
			operator char*()
			{
				return str;
			}
};
int main()
{
	char xstr[]="hello world\n";
	String s1=xstr;//called the one argument constructor or object array to char
	s1.display();
	String s2("good evening");//conversion 
	cout<<static_cast<char*>(s2);//char to object array
	cout<<endl;
	return 0;
	
}

