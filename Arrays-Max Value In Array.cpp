// https://hack.codingblocks.com/app/contests/4001/477/problem

#include<iostream>
using namespace std;
int max (int n){
    int i;
    int  arr[n];

    for(int i = 0; i <= n-1; i++){
        cin >> arr[i] ;
        cout << endl;
    }
    int maxi = arr[0];
    for( i = 1; i <= n-1; i++ ){
        if( arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
  
}
int main(){

    int n;
    cin >> n;
    cout << max(n);

}
