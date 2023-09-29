// https://hack.codingblocks.com/app/contests/4001/1086/problem

#include<iostream>
#include<cmath>
using namespace std;
 int digit(int n){
	int co=0;
	while(n>0){
		n=n/10;
		co++;
	}
	return co;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[100];
		for(int i=0;i<=n-1;i++){
			cin>>arr[i];
		}
for(int i=0;i<=n-2;i++){
	for(int j=0;j<=n-2-i;j++){
		long long int no1=arr[i]*pow(10,digit(arr[i+1]))+arr[i+1];
		long long int  no2=arr[i+1]*pow(10,digit(arr[i]))+arr[i];
		if(no1>no2){
			swap(arr[i],arr[i+1]);
		}
	}
}
for(int i=n-1;i>=0;i--){
	cout<<arr[i];
}
cout<<endl;
	}
	return 0;
}
