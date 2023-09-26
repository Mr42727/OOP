#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main()
{   
    // writing a file .
    // write data on file
    // string str="i am ibrar";
    string str2;
//    ofstream out("data.txt");
//    out<<"hello "<<endl;
//    out<<str;


 // Reading a file 
//  accessing the data from file

    cout.setf(ios::right);

   ifstream in("data.txt");
    while(!in.eof())
    {
    getline(in,str2);
     cout<<str2<<endl;
    }
   cout.unsetf(ios::right);
    return 0;

}