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
			String(char s[])
			{
				strcpy(str,s);
			}
			void display() const {
			cout<<str<<endl;
			}
			String operator + (String p) const//arguments ss can be change but object by which it called cannot be changed
		
			{
				String temp;
				if (strlen(str)+strlen(p.str)<size)
				{
					strcpy(temp.str,str);
					strcat(temp.str,p.str);
				}
				else
				{
					cout<<"overflow";
					exit(1);
				}
				return temp;
			}
		};
		int main()
		{
		String s1="Hello class";
		String s2=" How are you";
		String s3;
		s1.display();
		s2.display();
		s3=s1+s2;
		s3.display();
		return 0;
		}
