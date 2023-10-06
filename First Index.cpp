// https://hack.codingblocks.com/app/contests/4001/526/problem

#include<iostream>
using namespace std;
int findindex(int *arr, int n, int index, int key){
	//base case
	if(index == n){
		return -1;
	}

	//rec case
	if(arr[index] == key){
		return index;
	}
	return findindex(arr,n,index+1,key);
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int key;
	cin >> key;
	int ans = findindex(arr,n,0,key);

	if(ans > 0){
		cout << ans;
	}
	else{
		cout << ans;
	}
	return 0;
}
