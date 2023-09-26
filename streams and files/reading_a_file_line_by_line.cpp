#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    const int max=80;
    char buffer[max];
    ifstream infile("test.txt");
    while(!infile.eof())
    {
        infile.getline(buffer,max);
        cout<<buffer<<endl;
    }
    return 0;
}