// https://hack.codingblocks.com/app/contests/4001/1077/problem

#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){

int n;
cin >> n;
int arr[1000000];
for(int i = 0; i < n; i ++ ){
    cin >> arr[i];
}

int sum = 0;
int maxi = arr[0];
for(long long int i = 0; i < 2*n-1; i++){
    sum += arr[i%n];

    maxi = max(sum, maxi);

    if(sum < 0){
        sum = 0;
    }
}
cout << maxi<<endl;
	}
	return 0;
}
