#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main()
{   const int max=100;
    char store[max];
    char ch;
    int j;
    double d;
    string str1,str2;
    ifstream infile("fdata.txt");
    infile>>ch>>j>>d;
    while(!infile.eof())
    {
        infile.getline(store,max);
        cout<<store<<endl;
    }
    cout<<ch<<endl<<j<<endl<<d<<endl<<str1<<str2<<endl;
    return 0;
}