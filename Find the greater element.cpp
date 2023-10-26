// https://hack.codingblocks.com/app/contests/4001/1054/problem

#include<iostream>
#include<stack>
using namespace std;
void greaterelement(int arr[1000000],int n){
	stack<int> s;
	int output[1000000];
	for(int i=n-1;i>=0;i--){
		while(!s.empty() && arr[i]>s.top()){
		    s.pop();
			
		}
		if(!s.empty()){
			output[i]=s.top();
		}
		else{
			if(arr[(i+1)%n]>arr[i]){
			output[i]=arr[(i+1)%n];
			}
			else{
				output[i]=-1;
			}
		}
		
		s.push(arr[i]);
	}
	
	for(int i=0;i<n;i++){
		cout<<output[i]<<" ";
	}
}
int main() {
	int n;
	cin>>n;
	int arr[1000000];
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}
	greaterelement(arr,n);
	return 0;
}
