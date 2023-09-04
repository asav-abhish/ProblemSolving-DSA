// https://hack.codingblocks.com/app/contests/4001/285/problem

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>> n;
	int sp = n-1;
	
	for(int i = 0; i <n; i++){
		int icj = 1;
		for(int m = 1; m<= sp; m++){
			cout << "  ";
		}
		for(int j = 0; j<= i; j++){
			cout << icj <<"   ";
			int icj1 = icj * (i-j)/ (j+1);
			icj = icj1;
		}
		sp--;
		cout << endl;
	}
	return 0;
}
