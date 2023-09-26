#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ifstream infile("data.txt");
	while(infile.good())
	{
		infile.get(ch);
		cout<<ch;
	}
}
