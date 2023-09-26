#include<iostream>
using namespace std;
class employee{
	private:
		int emp_no;
		float emp_comp;
		public:
			void enter_data()
			{
				cout<<"Enter the employee number:\n";
				cin>>emp_no;
				cout<<"Enter the emplyee compensation:\n";
				cin>>emp_comp;
				
			}
			void show_data()
			{
				cout<<"Employee number is : "<<emp_no<<endl;
				cout<<"Employee compensation is :"<<emp_comp<<endl;
			}
};
int main()
{
	employee e1,e2,e3;
	e1.enter_data();
	e2.enter_data();
	e3.enter_data();
	e1.show_data();
	e2.show_data();
	e3.show_data();
	return 0;
}
