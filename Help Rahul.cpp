// https://hack.codingblocks.com/app/contests/4001/1044/problem


#include<iostream>
using namespace std;
int findindex(int *arr,int s,int e,int key){
	//base case
	if(s  > e ){
		return -1;
	}

	//rec case
	int mid = (s+e)/2;
	if(arr[mid] == key){
		return mid;
	}
	else if(arr[s] < arr[mid-1] ){
		if(key >= arr[s] && key <= arr[mid -1]){
			return  findindex(arr,s,mid-1,key);
		}
		else{
			return findindex(arr,mid+1,e,key);
		}
	}

	else{
		if(key >= arr[mid+1] && key <= arr[e]){
			return findindex(arr,mid+1,e,key);
		}
		else{
			return findindex(arr,s,mid-1,key);
		}
	}
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >>  arr[i];
	}
	int key ;
	cin >> key;

	int ans = findindex(arr,0,n-1,key);

	if (ans > -1){
		cout << ans;
	}
	else{
		cout << ans;
	}
	return 0;
}
