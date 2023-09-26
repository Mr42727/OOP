    #include <iostream>
    using namespace std;
    class person 
{
    protected:
    string name;
    int age;
    public:
    void get_data()
    {
        cout<<"enter name : ";
        cin>>name;
        cout<<"enter the age : ";
        cin>>age;
    }
    void put_data()
    {
        cout<<name;
        cout<<age;
        
    }
    virtual void isoutstanding()=0;
    virtual void get_gpa()=0;
};
class student:public person
{
    protected:
    float gpa;
    public:
    virtual void get_gpa()
    {
        person::get_data();
        cout<<"Enter the gpa of student : ";
        cin>>gpa;

    }
    void put_data()
    {
        person::put_data();
        cout<<" gpa of student is "<<gpa;
    }
    virtual void isoutstanding()
    {
        if(gpa>3.5)
        {
            cout<<"student is outstanding";
        }
    }
};
class Proffesor:public person
{
    protected:
    int no_of_pubs;
    public:
    void get_data()
    {
        person::get_data();
        cout<<"enter pubs";
        cin>>no_of_pubs;

    }
    void put_data()
    {
        person::put_data();
        cout<<"no of pubs is "<<no_of_pubs;
    }
    virtual void isoutstanding()
    {
        if(no_of_pubs>100)
        {
            cout<<"Professor is outstanding";
        }
    }
};
int main()
{
    // Proffesor p1,p2;
    student s1,s2;
    person *perptr[7];
    perptr[1]->get_data();
    perptr->isoutstanding();
    perptr->put_data();
    
}