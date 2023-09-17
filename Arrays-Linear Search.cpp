// https://hack.codingblocks.com/app/contests/4001/398/problem

#include<iostream>
using namespace std;

int res (int n){
	int arr[100000];
	for(int i = 0; i <= n-1; i++){
		cin >> arr[i] ; 
	}
	int m ;
	cin >> m;
	for(int i = 0 ; i <= n-1; i++){
		if(m == arr[i]){
			return i;
		}
	}
	return -1;
}
int main() {
	int n;
	cin >> n;
	cout << res(n);
	return 0;
}
