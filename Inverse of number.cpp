// https://hack.codingblocks.com/app/contests/4001/698/problem

#include<iostream>
#include<cmath>
using namespace std;
int main (){
    int n, ld, ans = 0, power = 1;
    cin >> n;

    while(n > 0){
        ld = n % 10;
        ans = ans + power * pow(10, ld - 1);
        n /= 10;
        power += 1;
    }
    cout << ans;
}
