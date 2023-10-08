// https://hack.codingblocks.com/app/contests/4001/1374/problem

#include<iostream>
using namespace std;
void indexes(int *arr,int n, int index, int key){
	//base case
	if(index == n){
		return;
	}

	//rec case
	if(arr[index] == key){
		cout << index << " ";
	}
	indexes(arr,n,index+1,key);
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
	indexes(arr,n,0,key);
	return 0;
}
