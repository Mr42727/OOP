#include<iostream>
#include<string>
using namespace std;
class person
{
    private:
    int age;
    float height;
    string name;
    int Class;
    int roll_no;
    string Best_frnd;

    public:
    void get_data()
    {
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter your age:";
        cin>>age;
        cout<<"Enter your height:";
        cin>>height;
        cout<<"Enter your class (Grade):";
        cin>>Class;
        cout<<"Enter your roll number :";
        cin>>roll_no;
        cout<<"Enter your best friend name:";
        cin>>Best_frnd;
    }
    void show_data()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<"years"<<endl;
        cout<<"Height:"<<height<<"feet"<<endl;
        cout<<"class:"<<Class<<endl;
        cout<<"Roll Number:"<<roll_no<<endl;
        cout<<"Your best friend name is :"<<Best_frnd<<endl;
    }
};
int main()
{
    person p1,p2;
    cout<<"Enter the data for the first person:\n";
    p1.get_data();
    p1.show_data();
    cout<<"Enter the data for the second person:\n";
    p2.get_data();
    p2.show_data();
    return 0;
}