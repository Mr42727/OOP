#include<iostream>
#include<cstring>
using namespace std;

class String {
	private:
		enum { sz = 20 };
		char str[sz];
	public:
		String() {
			str[0] = '\0';
		}
		String(char s[]) {
			strcpy(str, s);
		}
		void display() {
			cout << str;
		}
		void concat(String s2) {
			if (strlen(str) + strlen(s2.str) < sz)
				strcat(str, s2.str);
			else
				cout << "string is too long";
		}
};

int main() {
	String s1("Hello Everyone");
	String s2 = "greetings";
	String s3;
	cout << "\ns1=";
	s1.display();
	cout << "\ns2=";
	s2.display();
	cout << "\ns3=";
	s3.display();
	s3 = s1;
	cout << "\ns3=";
	s3.display();
	s3.concat(s2);
	cout << "\ns3=";
	s3.display();
	return 0;
}

