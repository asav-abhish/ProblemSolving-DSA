// https://hack.codingblocks.com/app/contests/4001/1743/problem

#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int candy;
        int person;
        cin >> candy >> person;
        int ans = candy % person;
        int m = person - ans;
        cout << min (ans, m) << endl;
    }
return 0;}
