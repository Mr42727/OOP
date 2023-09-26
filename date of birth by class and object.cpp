#include<iostream>
using namespace std;
class date{
	private:
		int day;
		int month;
		int year;
		public:
			void input(int nday,int nmonth,int nyear)
			{
			day=nday;
			month=nmonth;
			year=nyear;
			}
			void show()
			{
				cout<<"day of birth is : "<<day<<endl;
				cout<<"month of birth is : "<<month<<endl;
				cout<<"year of birth is : "<<year<<endl;	
			}
};
int main()
{
	date ibrar,n;
	ibrar.input(15,5,2004);
	ibrar.show();
	n.input(6,12,2004);
	n.show();
	return 0;
}
