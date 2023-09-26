#include<iostream>
using namespace std;
class parent 
{
	protected:
		int basedata;
		public:
			int getdata()
			{
				return basedata=10;
			}
		
};
class child1: virtual public parent
{
	
};
class child2: virtual public parent
{

};
class grand_child:public child1,public child2
{
	public:
		int getdata()
		{
			return basedata;
		}
};
int main()
{
	grand_child *ptr;
	grand_child c1;
	ptr=&c1;
	ptr->getdata();
	return 0;
}
