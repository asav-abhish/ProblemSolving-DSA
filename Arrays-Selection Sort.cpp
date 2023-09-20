// https://hack.codingblocks.com/app/contests/4001/561/problem

#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[100000];
	cin >> n;
	for (int i= 0; i <= n-1; i++){
		cin >> arr[i];
	}

	for(int i = 0; i <= n-2; i++){
		int min = i;
		for(int j = 1+i; j <= n-1; j++){
			if(arr[min] > arr[j]){
				min = j;
			}
			swap(arr[min],arr[i]);
		}
	}
	for(int i = 0; i <= n-1; i++){
	cout << arr[i];
	cout << endl;
	}
}
