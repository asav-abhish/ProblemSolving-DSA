// https://hack.codingblocks.com/app/contests/4001/457/problem

#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	for(int i = 0; i < s.length(); i++){
		if(i % 2 == 0){
			
			s[i] = s[i] + 1;
			
		}
		else{
			s[i] = s[i] - 1;
		}
	}

	cout  << s;
	return 0;
}
