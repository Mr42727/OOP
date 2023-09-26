#include<iostream>
using namespace std;
class Distance{
	private:
		int feet;
		float inches;
		public:
			void getdist()
			{
				cin>>feet>>inches;
			}
			void showdist()
			{
				cout<<feet<<inches;
			}
			
};
int main()
{
	const int range=2;
	Distance s1[range];
	int n=0;
	char ans;
	do{
		cout<<"enter number"<<n+1<<endl;
		s1[n++].getdist();
		cout<<"want to another";
		cin>>ans;
		
	}while((ans=='y'|| n<range) && n<=range);
	for(int i=0;i<n;i++)
{
	s1[i].showdist();
	}	return 0;
	
}
