// https://hack.codingblocks.com/app/contests/4001/1012/problem

#include<iostream>
using namespace std;

void rotate(int arr[1000][1000], int tr, int tc){
		for(int j = tc - 1; j >= 0; j--){
			for(int k = 0; k < tr; k++){
				cout << arr[k] [j] <<" ";
			}
			cout << endl;
		}
	}

int main() {
	int n;
	cin >> n;
	
	int arr[1000][1000];
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++){
		cin >> arr[i][j];
		}
	}
	int tr = n;
	int tc = n;
	rotate(arr,tr,tc);
	return 0;
}
