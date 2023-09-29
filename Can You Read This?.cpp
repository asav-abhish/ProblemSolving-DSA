// https://hack.codingblocks.com/app/contests/4001/66/problem

#include<iostream>
using namespace std;

int main() {
	string s;
	getline(cin , s);
	cout << s[0];
	if ( 'A' <= s[1] && s[1] <= 'Z' ){
			cout << endl;
		}
	int i;
	for( i = 1; i < s.size()-1; i++){
		cout << s[i];
		if ( 'A' <= s[i+1] && s[i+1] <= 'Z' ){
		cout << endl;
		}

		
	}

	cout << s[i];
	return 0;
}
