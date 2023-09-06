// https://hack.codingblocks.com/app/contests/4001/206/problem

#include<iostream>
using namespace std;
int main() {
	
	int n;
	cin >> n;
	int sum = n;

	while( sum >= 0){
		cout << n << endl;
		cin >> n;
		sum = sum + n;
	}
	return 0;
}
