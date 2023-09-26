#include<iostream>
using namespace std;
class foo
{
	private:
		static int count;
		public:
			foo()
			{
				count++;
			}
			int getcount()
			{
				return count;
			}
};
int foo :: count=0;
int main()
{
	foo f1,f2,f3,f4;
	cout<<f1.getcount();
	cout<<f2.getcount();
	cout<<f3.getcount();
	cout<<f4.getcount();
	return 0;
}


