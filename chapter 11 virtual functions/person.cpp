#include<iostream>
using namespace std;
class person
{
	protected:
	char name[100];
	public:
		void get_name()
		{
			cout<<"enter the name:";
			cin>>name;
		}
		void show_name()
		{
			cout<<"name="<<name<<endl;
		}
		virtual void getdata()=0;//syntax of abstract class and now this class object cannot be created
		virtual bool is_outstanding()=0;
};
class  professor : public person 
{
	private:
	int num_of_pub;
	public:
	void getdata()
	{
	person::get_name();
	cout<<"enter the number of publication:";
	cin>>num_of_pub;	
	}	
	bool is_outstanding()
	{
		return (num_of_pub>100)?true:false;
	}
};
class student : public person 
{
	private:
		float gpa;
		public:
			void getdata()
			{
				person::get_name();
				cout<<"enter the gpa:";
				cin>>gpa;
			}
			bool is_outstanding()
			{
				return(gpa>3.5)?true:false;
			}
};
int main()
{
	person *persptr[100];
	int n=1;
	char choice;
	do
	{
		cout<<"Enter student or professor (s/p)\n";
		cin>>choice;
		if (choice=='s')
		persptr[n]=new student;
		else 
		persptr[n]= new professor;
		persptr[n++]->getdata();
		cout<<"want to enter another (y/n):\n";
		cin>>choice;
	}
	while(choice=='y'||choice=='Y');
	for(int j=0;j<choice;j++)
	{
		persptr[j]->show_name();
		if(persptr[j]->is_outstanding())
		{
			cout<<"person is outstanding"<<endl;
		}
	}
	return 0;
}
