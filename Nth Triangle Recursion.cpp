// https://hack.codingblocks.com/app/contests/4001/240/problem

#include<iostream>
using namespace std;
int ntriangle(int n){
	//base case
	if ( n == 0){
		return 0;
	}
	//rec case
	return ntriangle(n-1) + n;
}
int main() {
	int n;
	cin >> n;

	cout << ntriangle(n) << endl;
	return 0;
}
