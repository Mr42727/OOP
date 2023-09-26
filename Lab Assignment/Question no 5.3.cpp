#include<iostream>
#include<string>
using namespace std;
class Date{
	private:
		int day,month,year;
		public:
			void get_date()
			{
				cout<<"Enter date (dd/mm/yy):"<<endl;
				char slash;
				cin>>day>>slash>>month>>slash>>year;
			}
			void show_date()
			{
				cout<<"date of hired\n";
				cout<<day<<"/"<<month<<"/"<<year;
			}
};
class employee{
	public:
		enum class EType{Laborer,Manager,Secretary
		};
	private:
		int Emp_no;
		float Emp_comp;
		Date date_of_first_employment;
		EType employee_type;
		public:
			void enter_data()
			{
				cout<<"Enter the employee no:";
				cin>>Emp_no;
				cout<<"enter the employee compensation:";
				cin>>Emp_comp;
				date_of_first_employment.get_date();
				cout<<"enter the type of employee:\n enter L for laborer\n M for manager \n S for secratory "<<endl;
				char str;
				cin>>str;
				if (str='L') 
				{
					employee_type = employee::EType::Laborer;
				}
				else if(str=='M' )
				{
					employee_type=employee::EType::Manager;
				}
				else if(str=='s' )
				{
					employee_type = employee::EType::Secretary;
				}
				else
				{
					cout<<"invaled input";
				}
			}
			void show_data()
			{
				cout<<"Employee data:"<<endl;
				cout<<"Employee number :"<<Emp_no;
				cout<<"Employee compensation : "<<Emp_comp;
				date_of_first_employment.show_date();
				cout<<"employee type :"<<endl;
				switch(employee_type)
				{
					case employee::EType::Laborer:
					cout<<"laborer";
					break;
					case employee::EType::Manager:
					cout<<"manager";
					break;
					case employee::EType::Secretary:
					cout<<"Secrertary";
					break;
				}
				cout<<endl;
			}
};
int main()
{
	employee employees[3];
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the data for employee"<<i+1<<":";
		employees[i].enter_data();
	}
	cout<<"Employees data:";
	for(int j=0;j<3;j++)
	{
		employees[j].show_data();
	}
	return 0;
}
