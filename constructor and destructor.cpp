#include<iostream>
using namespace std;
class Example{
	private:
		int price;
		int date_of_expires;
		float last_price;
		public:
			Example()
			{
				cout<<"i am constructer";
			}
			~Example()
			{
				cout<<"i am distructor";
			}
};
int main()
{
	
	return 0;
}
