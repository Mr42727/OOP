#include <iostream>
#include<string.h>
using namespace std;
class String
{
	private:
		enum{sz=100	};
		char str[sz];
		public:
			String()
			{
				strcpy(str,"");
			}
			String(char s[])
			{
				strcpy(str,s);
			}
			void show()
			{
				cout<<str<<endl;
			}
			String operator + (String s)
			{
				String temp;
				if(strlen(str)+strlen(s.str)<sz)
				{
					strcpy(temp.str,s.str);
					strcat(str,temp.str);
					return str;
				}
				else
				{
					cout<<"overflow";
				}
			}
};
int  main()
{
	String s1,s2,s3;
	s1="hello";
	s2=" world";
	s3=s1+s2;
	s3.show();
	return 0;
}
