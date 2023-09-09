// https://hack.codingblocks.com/app/contests/4001/219/problem

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, ld, n1;
	cin >> n;
	

	for(int i=1; i <= n; i++){
		cin >> n1;
		int count = 0, ans = 0;
	while(n1 != 0){
		count ++;
		ld = n1 % 10;
		n1 = n1 / 10;
		ans = ans + ld * pow(2, (count - 1));
	}
	cout << ans<< endl;
	}
	

	return 0;
}
