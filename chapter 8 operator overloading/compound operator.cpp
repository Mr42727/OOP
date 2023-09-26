#include<iostream>
using namespace std;
class Distance
{
	private:
		int feets;
		float inches;
		public:
			Distance():feets(0),inches(0)
			{
			}
			Distance(int ft,float in):feets(ft),inches(in)
			{
			}
			void get_dist()
			{
				cout<<"enter feets"<<endl;
				cin>>feets;
				cout<<"enter inches";
				cin>>inches;
			}
			void show_dist()
			{
				cout<<feets<<"'"<<inches<<" ''"<<endl;
			}
			Distance operator +=(Distance dist1)//we use void if d2+=d1; but for multiple i.e d3=d2+=d1; we have to return the nameless object 
			
			{
				feets+=dist1.feets;
				inches+=dist1.inches;
				if(inches>=12)
				{
					inches-=12;
					feets++;
				}
				return Distance ( feets, inches);//if we use the void then we dont need to write this 
			}
};
int main()
{
	Distance d1;
    d1.get_dist();

	Distance d2;
	d2+=d1;
	d2.show_dist();
	Distance d3;
	d3=d2+=d1;
	d3.show_dist();
	return 0;
}
