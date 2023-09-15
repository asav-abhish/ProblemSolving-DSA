// https://hack.codingblocks.com/app/contests/4001/404/problem

#include<iostream>
using namespace std;
int main(){
	int n, no, ans=0;
	cin >> n;

	for(int i = 1; i <= n; i++){
		cin >> no;
		ans = ans ^ no;
		
	}
	cout << ans;
}
