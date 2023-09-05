// https://hack.codingblocks.com/app/contests/4001/498/problem

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a = 0;
	int b = 1;
	for(int i = 0; i<n; i++){
		for(int j=0; j<=i; j++ ){
			cout << a << "\t";
			int c = a + b;
			a = b;
			b = c; 
		}
		cout << endl;
	}
	return 0;
}
