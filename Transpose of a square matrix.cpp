// https://hack.codingblocks.com/app/contests/4001/1889/problem

#include<iostream>
using namespace std;
void transpose(int arr[1001][1001], int row, int col , int colitr){
	//base case
	if (colitr == col ){
		return;
	}

	//rec case
	for(int i = 0; i < row; i++){
		cout << arr[i][colitr] << " ";
	}
	cout << endl;
	transpose(arr, row, col,colitr+1);
}
int main () {
	int n;
	cin >> n;
	int arr [1001][1001];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	transpose(arr,n,n,0);
	return 0;
}
