// https://hack.codingblocks.com/app/contests/4001/433/problem

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int ar[n];
	for(int i = 0 ; i <= n-1; i++){
		cin >> ar[i];
	}
	sort(ar , ar + n );
	if (ar [n-1] != ar[n-2]){
		cout << ar[n-1];
		return 0;
	}
	int i = 1;
	while( i <= n-1) {
		if(ar[i] != ar[i - 1]){
			cout << ar[i - 1];
			return 0;
		}
		i += 3;
	}

	return 0;
}
