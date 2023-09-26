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
			Distance (int ft , float in):feets(ft),inches(in)
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
			bool operator <(Distance dist1)
			{
				float f1=feets+inches/12;
				float f2=dist1.feets+dist1.inches/12;
				return (f1<f2?true:false);
			}
};

int main()
{
	Distance d1,d3;
	d1.get_dist();
	cout<<"d1=";
	d1.show_dist();
	Distance d2(11,4.4);
	cout<<"d2=";
	d2.show_dist();
	cout<<"d1<d2:";
	if(d1<d2)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
//	d3.show_dist();
	return 0;
}
