#include<iostream>
 using namespace std;
 class sarim{
 	private:
    int age;
    int weight;
	float height;
	public:
	void getdata()
	{ 
	cout<<"enter your age\n";
	cin>>age;
	cout<<"enter your weight\n";
	cin>>weight;
	cout<<"enter your height\n";
	cin>>height;
	
		}	
	void showdata(){
	
	cout<<"your age"<<age;
	cout<<"your weight"<<weight;
	cout<<"yourheight"<<height;
	
		
	}
	  
 };
 int main()
 {
 	sarim d1;
 	d1.getdata();
 	d1.showdata();
 }
