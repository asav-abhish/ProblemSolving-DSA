// https://hack.codingblocks.com/app/contests/4001/1366/problem

#include<iostream>
using namespace std;
void reverse(int n){
	int arr[100000];
	for(int i = 0; i <= n-1; i++){
		cin >> arr[i];
	}
	for(int i = n-1; i >= 0 ; i --){
		cout << arr[i];
		cout << endl;
	}
}
int main() {
	int n;
	cin >> n;
	reverse(n);
	return 0;
}
