// https://hack.codingblocks.com/app/contests/4001/199/problem

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100000];
    for(int i = 0; i <= n-1; i++){
        cin >> arr[i];
    }

    int m;
    cin >> m;
    for(int i = 0; i <= n-1; i++){
        if(m == arr[i] ){
            cout << i;
            return 0;
        }
}
cout << -1;
}
