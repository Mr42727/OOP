#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    char ch='x';
    int j=10;
    double d=6.12;
    string str1="Ahmad Ali\n";
    string str2="Ali khan\n";
    ofstream outfile("fdata.txt");
    outfile<<ch<<j<<' '<<d<<endl<<str1<<endl<<str2;
    cout<<"code is written";
    return 0;

}