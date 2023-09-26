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
			Distance(float fltfeet)
			{
				feets=int(fltfeet);
				inches=12*(fltfeet-feets);
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
//			Distance operator +(Distance);
			friend Distance  operator +(Distance,Distance);
};
 Distance operator +( Distance dist1,Distance dist2)
{
	int f=dist1.feets+dist2.feets;
	int i=dist1.inches+dist2.inches;
	if(i>=12)
	{
		f+=1;
		i-=12;
	}
		return Distance(f,i);

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
	d3=10.3+d2;
	cout<<"d3=";
	d3.show_dist();
	return 0;
}
