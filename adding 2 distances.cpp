#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		float inches;
		public:
			Distance():feet(0),inches(0)
			{
				
			}
			Distance(int ft,float in):feet(ft),inches(in)
			{
//			feet=ft;
//			inches=in;
			}
			void setdistance()
			{
				cout<<"enter feet\n";
				cin>>feet;
				cout<<"enter inches\n";
				cin>>inches;
			}
			void showdist()
			{
				cout<<feet<<"\'"<<inches<<"\''"<<endl;
				
			}
			void addist(Distance,Distance);
			
};
void Distance::addist(Distance s1,Distance s2)
{
	inches=s1.inches+s2.inches;
	feet=0;
	if(inches>=12)
	{
		inches-=12;
		feet++;
	}
	feet+=s1.feet+s2.feet;
}
int main()
{
	Distance d1,d3,d2(3,4.4);
//	distance ;
	d1.setdistance();
	d3.addist(d1,d2);
	d1.showdist();
	d3.showdist();
	return 0;
	
}
