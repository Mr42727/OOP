#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string str="i am m ibrar\n and i am in BSCS";
	ofstream outfile("data.txt");
	for(int i=0;i<str.size();i++)
	{
		outfile.put(str[i]);
	}
}
