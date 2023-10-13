// https://hack.codingblocks.com/app/contests/4001/439/problem

#include<iostream>
using namespace std;
#include<string>
string fun(string &s,int i,int &size)
{

if(i==size)
{
	return s ;
}

if(s[i]==s[i+1])
{char ch='*';
	s=s.substr(0,i+1)+ch+s.substr(i+1,(size-i));
	size++;
	return fun(s,i+2,size);

}
return fun(s,i+1,size);

}
int main() {

	string s;
	getline(cin,s);
	
	int i=0;
	int size=s.length();
	s=fun(s,i,size);
	cout<<s;

	return 0;
}
