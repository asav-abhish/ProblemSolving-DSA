// https://hack.codingblocks.com/app/contests/4001/16/problem

#include<iostream>
using namespace std;
int power(int a,int b){
	//base case
	if(b==0){
		return 1;
	}
	//rec case
	return a * power(a,b-1);
}
int main() {
	int a,b;
	cin >> a >> b;
	cout << power(a,b);
	return 0;
}
