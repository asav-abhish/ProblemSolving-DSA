// https://hack.codingblocks.com/app/contests/4001/161/problem

#include<iostream>
using namespace std;
int main(){
	long long int N, ld;
	cin >> N;

	if(N==0) {
		cout << 5;
		return 0;
	}

	long long int reverse = 0;

	while(N > 0){
		ld = N % 10;
		if(ld == 0){
			ld = 5;
		}

		reverse = reverse * 10 + ld;
		N = N / 10;
	}
	// cout << reverse;

	long long int reverse1 = reverse;
	long long int lastd;
	long long int originalnumber = 0;

	while (reverse1 > 0){
		lastd = reverse1 % 10;
		originalnumber = originalnumber * 10 + lastd;
		reverse1 = reverse1 / 10;
	}

	cout << originalnumber;
}
