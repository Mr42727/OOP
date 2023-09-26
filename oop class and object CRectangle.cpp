#include<iostream>
using namespace std;
class CRectangle{
	private:
		int x,y,z;
		public:
			void input()
			{
				cout<<"enter values of x and y and z"<<endl;
				cin>>x>>y>>z;
			}
			void area()
			{
			cout<<"area of rectangle is "<<x*y<<endl;	
			}
			void volume()
			{
				cout<<"volume="<<x*y*z<<endl;
			}

};
int main()
{
	CRectangle area;
	area.input();
	area.area();
	area.volume();
	area.
	return 0;
}
