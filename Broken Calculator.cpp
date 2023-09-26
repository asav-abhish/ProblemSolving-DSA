// https://hack.codingblocks.com/app/contests/4001/325/problem

#include<iostream>
using namespace std;

void mult (int a[1000], int i, int &nopti){
    int carry = 0;
    int j;
    for( j = 0; j < nopti; j++){
    int product = i * a[j] + carry;
    a[j] = product % 10;
    carry = product / 10;
    }

    while(carry > 0){
        a[j] = carry % 10;
        j++;
        nopti ++;
        carry /= 10;
    }
}

void fact(int n){
    int a[1000];
    a[0] = 1;
    int numberofPlacestoiterate = 1;

    for(int i=1; i <= n; i++ ){
        mult(a,i, numberofPlacestoiterate);
    }

    for(int m = numberofPlacestoiterate - 1; m >= 0; m--){
        cout << a[m];
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    fact(n);
}
