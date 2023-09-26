#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream outfile("test.txt");
    outfile<<"i am happy\n";
    outfile<<"because of final exams\n";
    outfile<<"sarim has prepared\n";
    outfile<<"very well\n";

    return 0;
}