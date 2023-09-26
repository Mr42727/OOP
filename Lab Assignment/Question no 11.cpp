#include <iostream>
#include <cstring>
using namespace std;

void reversit(char *str) {
 int len = strlen(str);
 for (int i = 0; i < len/2; i++) {
 char temp = str[i];
 str[i] = str[len-1-i];
 str[len-1-i] = temp;
 }
}
int main() {
 const int MAX_LEN = 100;
 char str[MAX_LEN];
 cout << "Enter a string: ";
 cin.getline(str,10);
 reversit(str);
 cout << "Reversed string: " << str << endl;
 return 0;
}
