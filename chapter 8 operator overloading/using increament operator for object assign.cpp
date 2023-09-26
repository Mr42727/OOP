#include<iostream>
using namespace std;
class counter{
	private:
		int count;
		public:
			counter():count(0)
			{
			}
			counter (int c):count(c)
			{
				
			}
			int get_count()
			{
				return count;
			}
			counter operator ++()//for prefix
			{
				++count;
				return counter(count);
			}
//			//for postfix
			counter operator ++ (int)
			{
				//++count;
				return counter(count++);
			}
};
int main()
{
	counter c1,c2;
	
	cout<<"\nc1="<<c1.get_count();
	cout<<"\nc2="<<c2.get_count();
	c1++;
	c1++;
	c2=c1++;
//	c2=++c1; //it is for prefix
		cout<<"\nc1="<<c1.get_count();
	cout<<"\nc2="<<c2.get_count();
	return 0;
}
