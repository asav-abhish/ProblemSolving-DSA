//  https://hack.codingblocks.com/app/contests/4001/304/problem

#include<iostream>
using namespace std;
int main() {
	char ch;
	cin >> ch;
	//int A,Z,a,b;

	if(ch>='A' && ch<='Z'){
		cout<<"U";
	}
	else if(ch>='a' && ch<='z'){
		cout<<"L";
	}
	else{
		cout<<"I";
	}
	return 0;
}
