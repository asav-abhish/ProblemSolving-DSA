// https://hack.codingblocks.com/app/contests/4001/104/problem

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n; 
	for (int i=1; i <= n; i++){
		int n1;
		cin >> n1;
	int count = 0;
	while(n1 != 0){
		if(n1 % 2 == 1){
			count ++;
		}
		n1 = n1 /2;
	} cout  << count << endl;
	}
	return 0;
}
