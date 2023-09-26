#include<iostream>
using namespace std;
class Distance
{
private:
 float MTF;
int feet;
int inches;
public:
Distance():feet(0),inches(0),MTF(3.280833)	
{
}
Distance(int ft,int in):feet(ft),inches(in),MTF(3.280833)
{
	
}
Distance(float mtr):MTF(3.280833)
{
	float fltfeet=mtr*MTF;
	feet=int(fltfeet);
	inches=12*(fltfeet-feet);
}
void get_dist()
{
	cout<<"enter the feets:\n";
	cin>>feet;
	cout<<"enter the inches:";
	cin>>inches;
	
}
void show_dist()
{
	cout<<feet<<"'"<<inches<<'"'<<endl;
}
operator float() const
{
	float fracfeet=inches/12;
	fracfeet=static_cast<float>(feet);
	return fracfeet/MTF;	
}
};
int main()

{
	float mtrs;
	Distance dist1;
	dist1=3.2;
	cout<<"distance d1=";
	dist1.show_dist();
	mtrs=static_cast<float>(dist1);
	cout<<"distaance 1="<<mtrs<<"meters";
	
	
	return 0;
}

