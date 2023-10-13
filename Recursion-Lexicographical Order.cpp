// https://hack.codingblocks.com/app/contests/4001/508/problem

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void lexo(int n){
    vector <string> s;
    for(int i=0; i<=n; i++){
        s.push_back(to_string(i));
    }
    sort(s.begin(),s.end());
    for(int i=0; i<=n; i++){
        cout << s[i] <<" ";
    }
}
int main() {
    int n;
    cin>> n;

    lexo(n);
}
