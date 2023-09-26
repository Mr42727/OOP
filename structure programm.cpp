#include<iostream>
//#include<string.h>
using namespace std;
const int sz=100;
struct employee
{
	string name;
	int id;
	int age ;
	employee():id(0),age(0)
	{
		
	}
};
int main()
{
	struct employee e1;
//	employee e2={227720,19};
	e1.name="mohummad ibrar";
	e1.age=18;
	cout<<"name="<<e1.name;
	cout<<endl;
	cout<<"age="<<e1.age;
//	cout<<"id="<<e2.id;
//	cout<<"age="<<e2.age;
	return 0;
}
