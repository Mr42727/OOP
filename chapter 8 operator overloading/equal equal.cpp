#include<iostream>
#include<string.h>
using namespace std;
class String{
	private :
		enum{size=80};
		char str[size];
		public:
			String()
			{
				strcpy(str," ");
			}
			String(const char s[])
			{
				strcpy(str,s);
			}
			void get_str()
			{
				gets(str);
			}
			void display() const {
			cout<<str<<endl;
			}
			bool operator == (String s)	const
			{
				if(strcmp(str,s.str)==0)
				return true;
				else
				return false;
				}	
			
		};
		int main()
		{
		String s1("Yes");
		String s2("No");
		String s3;
		cout<<"enter Yes or No"<<endl;
		s3.get_str();
		if(s3==s1)
		{
			cout<<"you enterd Yes";
			
		}
		else if(s3==s2)
		{
			cout<<"you enterd No";
		}
		else
		{
			cout<<"error";
		}
		return 0;
		}
