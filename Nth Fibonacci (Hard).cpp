// https://hack.codingblocks.com/app/contests/4001/242/problem

#include<iostream>
using namespace std;
int main() {
	int n, c;
	cin >> n;
	int a = 0, b = 1;

	for(int i = 1; i <= n-1; i++){
		c = a + b;
		a = b;
		b = c;
	}
	cout << c ;

	return 0;
}
