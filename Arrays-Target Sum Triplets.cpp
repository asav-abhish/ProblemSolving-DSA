// https://hack.codingblocks.com/app/contests/4001/195/problem

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;

	vector <int> v;
	int a[1000];
	for(int i = 0; i <= n-1; i++){
		cin >> a[i];
	}
	int target ;
	cin >> target;

	sort(a,a + n);
	for(int i = 0; i <= n-3; i++){
		for(int j = 1+i; j <= n-2; j++){
			for(int k = j + 1; k <= n-1; k++){
				if ( a[i] + a[j] + a[k] == target ){
					cout << a[i] <<", " << a[j] << " and " << a[k] <<endl;
				}
			}
		}
	}
	return 0;
}
