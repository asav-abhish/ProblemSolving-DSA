// https://hack.codingblocks.com/app/contests/4001/176/problem

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cin >> x;
    int n;
    cin >> n;
    int arr[n];
    string a[n];

    for(int i = 0; i<n; i++){
		cin >> a[i];
        cin>>arr[i] ;
		
    }
    for(int i=0; i<n-1; i++){
        for(int j=1+i; j<n;j++){
            if(arr[i] < arr[j]){
                swap(arr[i],arr[j]);
                swap(a[i],a[j]);
            }
            else if(arr[i] == arr[j]){
                if(a[i] > a[j]){
                    swap(a[i],a[j]);
                }
            }
        }
    }
  for(int i=0; i<n; i++){
	  if(arr[i] >= x){
		  cout<< a[i] << " "<<arr[i] << endl;
	  }
    
  }
   
}
