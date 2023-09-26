#include<iostream>
using namespace std;
class height{
	private:
		int feet;
		float inches;
		public:
			height():feet(0),inches(0)
			{
				
			}
			height(int ft,float in):feet(ft),inches(in)
			{
				
			}
			void getheight()
			{
				cout<<"enter feet and height";
				cin>>feet>>inches;
			}
			void show() const 
			{
//			feet++;
			cout<<"feet="<<feet<<"inches="<<inches;
			} 
		height addheight( const height &) const;
};
height height ::addheight( const height &h4) const
{
//	feet=0;
h4.feet=10;
}
int main()
{
	height h1,h2;

	height h3(3,5.5);
	h2.getheight();
	h1=h2.addheight(h3);
	h1.show();
	h2.show();
	h3.show();
	
}
