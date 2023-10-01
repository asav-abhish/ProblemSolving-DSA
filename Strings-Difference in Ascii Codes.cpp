// https://hack.codingblocks.com/app/contests/4001/489/problem

#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin , s);
	
	cout << s[0];
	for(int i = 1; i < s.length(); i++){
		cout << s[i] - s[i-1] << s[i];
	}
	return 0;
}
