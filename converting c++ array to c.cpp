#include<iostream>
#include<string>
using namespace std;
int main()
{
	char charray[30];
	string word;
	//cout<<"enter a word";
	cout<<"enter a sentence";
	getline(cin,word);
	int wlen=word.length();
	cout<<"one character at a time";//c sstring always have null character
	for(int j=0;j<wlen;j++)
	{
		cout<<word.at(j);
		//cout<<word[j;
	}
	word.copy(charray,8,8);//by this we can copy substring of string or we are copying the whole string
	//
//	charray[wlen]=0;//'\0'
	charray[wlen]='\0';//'\0'

	cout<<"\narray contains : "<<charray<<endl;
	return 0;
	}
