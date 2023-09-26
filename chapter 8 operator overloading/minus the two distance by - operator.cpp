#include<iostream>
using namespace std;
class Distance{
	private:
		int feets;
		float inches;
		public:
			Distance():feets(0),inches(0)
			{
				
			}
			Distance (int ft , int in):feets(ft),inches(in)
			{
				
			}
			
			void get_dist()
			{
				cout<<"enter the feets \n";
				cin>>feets;
				cout<<"enter inches\n";
				cin>>inches;
			}
			void show_dist()
			{
				cout<<feets<<"."<<inches<<endl;
//				cout<<inches<<endl;
			}
			Distance operator -(Distance);
};
Distance Distance :: operator -( Distance dist1)
{
	int ft=feets-dist1.feets;
	int in=inches-dist1.inches;

		return Distance(ft,in);

}
int main()
{
	Distance d1,d3;
	d1.get_dist();
	cout<<"d1=";
	d1.show_dist();
	Distance d2(11,4.4);
	cout<<"d2=";
	d2.show_dist();
	d3=d1-d2;
	cout<<"d3=";
	d3.show_dist();
	return 0;
}
