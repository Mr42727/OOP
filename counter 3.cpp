#include<iostream>
using namespace std;
class counter{
	private:
		int count;
		public:
			counter()
			{
				count=0;
				count++;
				
			}
			void show()
			{
				cout<<"count="<<count;
				
			}
			
};
int main()
{
	counter c1,c2;
	c1.show();
	c2.show();
	counter c3;
	c3.show();
	return 0;
}
