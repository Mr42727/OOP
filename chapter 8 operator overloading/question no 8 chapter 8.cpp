#include<iostream>
using namespace std;
class Distance{
	private:
		int feets;
		float inches;
		public:
			Distance ():feets(0),inches(0)
			{
				
			}
			Distance(int ft,float in):feets(ft),inches(in)
			{
			}
			void get_dist()
			{
				cout<<"enter the feets:";
				cin>>feets;
				cout<<"enter the inches:";
				cin>>inches;
			}
			void show_dist()
			{
				if(inches>=12)
				{
					feets++;
					inches-=12;
				}
				cout<<feets<<'\''<<inches<<'\"';
			}
			void operator ++()
			{

				++feets;
			}
};

int main()
{
	Distance d1(12,3);
	d1.show_dist();
	Distance d2;
	d2.get_dist();
	d2.show_dist();
	++d2;
	cout<<"d1=";d1.show_dist();
	cout<<"d2=";d2.show_dist();
}
