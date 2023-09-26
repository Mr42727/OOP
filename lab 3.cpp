#include<iostream>
using namespace std;
class myheight

{
	private:
	int feets;	
	float inches;
	public:
		void setheight(int ft,float in)
		{
			feets=ft;
			inches=in;
		}
		void height()
		{
			cout<<"enter feets\n";
			cin>>feets;
			cout<<"enter inches\n";
			cin>>inches;
		}
		void show()
		{
			cout<<"your height is "<<feets<<"\'."<<inches<<"\''"<<endl;
		}
	
};
int main()
{
	myheight ibrar,ibad;
	
cout<<"enter the height of ibrar\n";
	ibrar.height();
	ibrar.show();
	
	ibad.setheight(5,6);
	ibad.show();
	
}
