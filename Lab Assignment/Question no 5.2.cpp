#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
static int i=1;
enum etype{laborer,secetary,manager,designer,programmer};
class date
{
    private:
    int day,month,year;
    public:
    date():day(0),month(0),year(0)
    {

    }
    void input_date()
    {
        cout<<"In format day month year ( '/' between each)"<<endl;
        cin>>day>>month>>year;
    }
    void show_date()
    {
        cout<<"The date of employement of employ no "<<i<<" is : "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
class employee
    {
        private:
        int emp_no;
        float emp_compensation;
        date hiredate;
        etype emptype;
        char choice;
        string jobtype;
        public:
        void input_data()
        {
                cout<<"Enter number of employee no "<<i<<endl;
                cin>>emp_no;
                cout<<"Enter compensation of employee no "<<i<<endl;
                cin>>emp_compensation;
                cout<<"Enter hire date of employee no "<<i<<endl;
                hiredate.input_date();
                int j=0;
                cout<<"Enter the type of job of employee no " <<i<<"\n l for laborer\t s for secetary\t m for manager\n d for designer\t p for programmer "<<endl;
                do{
                choice=getch();
                j++;
                switch(choice)
                {
                    case 'l':
                    jobtype="laborer";
                    cout<<"laborer";
                    break;
                    case 's':
                    jobtype="secetary";
                    cout<<"secetary";
                    break;
                    case 'm':
                    jobtype="manager";
                    cout<<"manager";
                    break;
                    case 'd':
                    jobtype="designer";
                    cout<<"designer";
                    break;
                    case 'p':
                    jobtype="programmer";
                    cout<<"programmer";
                    break;
                    default:
                    cout<<"wrong choice select from any of above"<<endl;
                    j--;
                }
                }while(j==0);
        }
        void show_data()
        {
           cout<<"\n****RESULTS***\n";
           cout<<"The number of employee "<<i<<" is : "<<emp_no<<endl;
           cout<<"The compensation of employee " <<i<< " is :"<<emp_compensation<<endl;
           cout<<"The hire date of employee no "<<i<<" is "<< endl;
            hiredate.show_date();
            cout<<"the jobtype of employee no "<<i<<" is "<<jobtype<<endl<<endl;
           
           i++;
        }
    };
int main()
{
    employee emp1,emp2,emp3;
    emp1.input_data();
    emp1.show_data();
    emp2.input_data();
    emp2.show_data();
    emp3.input_data();
    emp3.show_data();
    return 0;
}
