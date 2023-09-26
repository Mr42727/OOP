#include<iostream>
using namespace std;
class Base
{
	public:
		virtual ~Base()//it will call this if we dont use the word virtual
		{
			cout<<"i am base class destructor\n";
		}
};
class derv : public Base
{
	public:
		~derv()
		{
			cout<<"i am destructor of derive class\n";
		}
};
int main()
{
	Base *Baseptr=new derv;
	delete Baseptr;//called the base class destructor bcz 
	//we have'nt use the word virtual to the destructor of base class.
	return 0;
}
// now with keyword virtual first drv class destructor called when object deleted then the base class destructor.
