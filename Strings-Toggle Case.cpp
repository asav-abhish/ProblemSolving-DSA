// https://hack.codingblocks.com/app/contests/4001/445/problem

#include<iostream>
using namespace std;
int main() {
	string s;
	getline(cin, s);

	for(int i = 0; i < s.size(); i++ ){
		if( 'a' <= s[i] && s[i] <= 'z')
			s[i] = s[i] + 'A' - 'a';
		else if ( 'A' <= s[i] && s[i] <= 'Z' )
			s[i] = s[i] + 'a' - 'A';
	}
	cout << s;
	return 0;
}
