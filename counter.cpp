#include<iostream>
using namespace std;
class counter{
	private:
		unsigned int count;
		public:
			counter():count(1)
			{
				
			}
			void inc_count()
			{
				count++;
			}
			void dec_count()
			{
				count--;
			}
			int get_count()
			{
				return count;
			}
};
int main()
{
	counter c1,c2;
	c1.inc_count();
	cout<<"c1="<<c1.get_count();
	c2.dec_count();
	cout<<"\nc2="<<c2.get_count();
	return 0;
}
