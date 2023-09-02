// https://hack.codingblocks.com/app/contests/4001/1833/problem
// n = 5

// 1 
// 1 4 
// 1 4 9 
// 1 4 9 16 
// 1 4 9 16 25 

  
#include<iostream>
#include<cmath> 
using namespace std;
int main () {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout << pow(j,2)<<" ";
		}
		cout << endl;
	}
	return 0;
}
