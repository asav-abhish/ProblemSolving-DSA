// https://hack.codingblocks.com/app/contests/4001/184/problem

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, ld;
	cin >> n;
	int count = 0, ans = 0;
	while(n != 0){
		count ++;
		ld = n % 10;
		n = n / 10;
		ans = ans + ld * pow(2, (count - 1));
	}
	cout << ans;
	return 0;
}
