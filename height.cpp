#include<iostream>
using namespace std;
class height{
	private:
	int inches;
	int feets;
	public:
		myheight(int ft, int in)
		{
		feets=ft;
		inches=in;	
		}
		void getheight()
		{
			cout<<"enter feets "<<endl;
			cin>>feets;
			cout<<"enter inches"<<endl;
			cin>>inches;
		}
		void showheight()
		{
			cout<<"your height is "<<endl;
			cout<<feets<<"\'"<<inches<<"\''"<<endl;
		}
};
int main()
{
	height myheight,yourheight;
	myheight(3,5);
	yourheight.getheight();
	myheight.showheight();
	yourheight.showheight();
	return 0;
}
