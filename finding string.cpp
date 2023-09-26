//finding the string position
#include<iostream>
#include<string>
using namespace std;
int main()
{



string s1="how many of your working on programmm";
int n;
n=s1.find("many");
cout<<"found 'many' at"<<n<<endl;
n=s1.find_first_of("r");
cout<<"found first of 'r' at "<<n<<endl;
n=s1.find_first_not_of("aeiou");
cout<<"found consonant at"<<n<<endl;
return 0;
}
