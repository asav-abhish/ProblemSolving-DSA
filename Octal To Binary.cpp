// https://hack.codingblocks.com/app/contests/4001/1099/problem

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, count = 0, ld;
    int ld1, ans1 = 0, power = 1;
    int ld2, sum = 0, reverse = 0;
	cin >> n;
	
    int  ans = 0;
    while(n > 0){
	    count++;
        ld = n % 10;
        n /= 10;
        ans = ans + pow(8,(count-1)) * ld ;
    }
    while(ans > 0){
        ld1 = ans % 2;
        ans /= 2;
        ans1 = ans1 + (power * ld1);
		power = power * 10;
    }
	cout << ans1;
}
