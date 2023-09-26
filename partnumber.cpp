//part name 
#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
class part{
	private:
		char partname[20];
		double partnumber;
		double cost;
		public:
			void set_part(char pname[],int pn,double c)
			{
				strcpy(partname,pname);
				partnumber=pn;
				cost=c;
			}
			void get_part()
			{
				cout<<"enter the partname";
//				getline(partname[],20,'$');
				cin>>partname;
				cout<<"enter the part number:";
				cin>>partnumber;
				cout<<"enter the cost:";
				cin>>cost;
				
			}
			void show_part()
			{
				cout<<"\n name:"<<partname;
				cout<<"\n number:"<<partnumber;
				cout<<"\n cost:"<<cost<<endl;
				
			}
};
int main()
{
	part part1,part2;
	part1.set_part("Handlepot",5445,45.45);
	part2.set_part("kit",54556,444.45);
	cout<<"part1:";
	part1.show_part();
	cout<<"part2:";
	part2.show_part();
	part p3;
	p3.get_part();
	cout<<"part3=";
	p3.show_part();
	return 0;
}
