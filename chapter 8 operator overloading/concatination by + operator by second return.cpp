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
			void display() const {
			cout<<str<<endl;
			}
			String operator + (String s) const//arguments ss can be change but object by which it called cannot be changed
		
			{
				return String(s);

			}
		};
		int main()
		{
		String s1="Hello class";
		String s2=" How are you all";
		String s3;
		s1.display();
		s2.display();
		s3=s1+s2;
		s3.display();
		return 0;
		}
