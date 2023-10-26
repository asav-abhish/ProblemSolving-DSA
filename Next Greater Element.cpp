// https://hack.codingblocks.com/app/contests/4001/1053/problem

#include <bits/stdc++.h> 
using namespace std; 

// Function to print Next Greater Element for each element of the array
void nextGreater(int arr[], int n) 
{ 


    int arr1[n];
    stack<int>s;

    for(int i=n-1;i>=0;i--){
        while(!s.empty() and arr[i]>=s.top()){
            s.pop();
        }
        if(!s.empty()){
            arr1[i]=s.top();
        }
        else{
            arr1[i]=-1;
        }
        s.push(arr[i]);
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<","<<arr1[i] <<endl;
    }


} 

int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        nextGreater(arr, n); 
    }
	
	return 0; 
}
