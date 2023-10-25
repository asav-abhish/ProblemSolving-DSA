// https://hack.codingblocks.com/app/contests/4001/467/problem

#include<iostream>
using namespace std;
void fun(int *arr,int leftpointer, int rightpointer, int n){
	if(rightpointer == n){
		return;
	}
	int min = 0;
bool flag = 1;
	for(int i = leftpointer; i <= rightpointer; i++){
		if(arr[i] < min){
			flag = 0;
			cout << arr[i] << " ";
			break;
		}
	}
	if(flag == 1){
		cout << '0' << " ";
	}
		
	fun(arr,leftpointer+1, rightpointer+1, n);
	
	
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int window;
		cin >> window;
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}

		fun(arr,0,window-1,n);

		cout<<endl;
	}
	return 0;
}
