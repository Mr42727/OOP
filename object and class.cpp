#include<iostream>
using namespace std;
class human{
	private:
		int weight;
		float height;
		public:
			void input ()
			{
				cout<<"enter your wight and height"<<endl;
				cin>>weight>>height;	
			}
			void walk()
			{
				cout<<"i can walk"<<endl;
			}
			void talk()
			{
				cout<<"i can talk"<<endl;
			}
		
};
int main()
{
	human ibrar;
	ibrar.input();
	ibrar.talk();
	ibrar.walk();
	return 0;
}
