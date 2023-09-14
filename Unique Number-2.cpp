// https://hack.codingblocks.com/app/contests/4001/213/problem

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector <int> v;
	int a[n];
	for(int i=0; i <= n-1; i++){
		cin >> a[i];
	}
	sort(a, a+n);

	if(n==2){
		cout << a[0] << " " << a[1];
	}

	else if(n > 2){
		int j;
		for( j=0; j<= n-1; j+=2){
			if( a[j] != a[j+1]){
				v.push_back(a[j]);
				break;
			}
		}

		int x = 0;
		for( int k = j+1  ; k<= n-1; k++){
			x = x ^ a[k];
			
		}
		
		v.push_back(x);

		cout << v[0] << " " << v[1];
	}
	return 0;
}
