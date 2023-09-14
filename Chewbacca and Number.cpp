// https://hack.codingblocks.com/app/contests/4001/132/problem

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long long int n;
cin >> n;
if(n == 9 || n == 0 ){
		cout << 9;
		return 0;
}
long long int p = n, ld , num , k = 0, co=0;
int arr[100];
while(p >= 10){
    p /= 10;
}

while(n > 0){
    ld = n % 10;
        if ( ld < 5 ){
            arr[k] = ld;
            k++;
        }
        else{
            arr[k] = 9 - ld;
            k++;
        }
    n /= 10;
}
if ( p == 9){
    cout << 9;
    for(int i = k-2 ; i >= 0; i-- ){
       cout << arr[i];
    }
}
else{
    for(int i = k-1 ; i >= 0; i-- ){
       cout << arr[i];
    }
}
}
