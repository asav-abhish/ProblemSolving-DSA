// https://hack.codingblocks.com/app/contests/4001/1254/problem

#include<iostream>
#include<algorithm>
using namespace std;
int fun (int *arr, int i, int j, int dp[100][100]){
	if(i>j){
		return dp[i][j] = 0;
	}
	if(i == j){
		return dp[i][j] = arr[i];
	}
	if(dp [i][j] != -1){
		return dp[i][j];
	}
	
	int opt1 = arr[i] + min( fun(arr,i+1,j-1,dp), fun(arr,i+2,j,dp));
	int opt2 = arr[j] + min( fun(arr,i,j-2,dp), fun(arr,i+1,j-1,dp));

	return dp[i][j] =  max(opt1,opt2);
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
int dp[100][100];
memset(dp,-1,sizeof(dp));
	cout << fun(arr,0,n-1,dp);
	
	return 0;
}
