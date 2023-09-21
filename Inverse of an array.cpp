// https://hack.codingblocks.com/app/contests/4001/21/problem

#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;

int a[n];
int b[n];
int i;
for( i = 0 ; i <= n-1; i++){
    cin >> a[i] ; 
}

for( i = 0; i <= n-1; i++){
    int num = a[i] ;
    b[num] = i;
}

for( i = 0 ; i <= n-1; i++){
    cout << b[i] <<" ";
}

}
