// https://hack.codingblocks.com/app/contests/4001/43/problem

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++ ){
		long long int n, k;
		cin >> n>> k;
	
		for(long long int j = 1; j <= n; j++){
			//cout << j << endl;
			if (k == 1){
				cout << n<<endl;
				break;	
			}

			if ( pow(j,k) > n){
				cout << j - 1 << endl;
				break;
			} 

		}
	}
	return 0;
}
