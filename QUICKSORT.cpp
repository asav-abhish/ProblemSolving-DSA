// https://hack.codingblocks.com/app/contests/4001/736/problem

#include<iostream>
using namespace  std;
void quicksort(int arr[],int s,int e){

    if(s > e){
        return ;
    }
    int ele=arr[e];
    int j=s;   //jhagha banne ka kaam kar rha hoga


    for(int i=s; i<e;i++){
        if(arr[i] < ele){
            swap(arr[j],arr[i]);
			j++;
        }
    }
	swap(arr[j],arr[e]);
	
    quicksort(arr,s,j-1);
    quicksort(arr,j+1,e);
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<< " ";
    }
}
