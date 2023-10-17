// https://hack.codingblocks.com/app/contests/4001/1378/problem

#include<iostream>
using namespace std;
bool sortedornot(int *arr, int n){
    //base case
    if (n==1){
        return true;
    }
    


    //reccase
    if ( sortedornot(arr,n-1) && arr[n-2] <= arr[n-1] ){
        return true;
    }
    return false;
    
     
}

int main(){
    int n;
    cin >> n;
    int arr[10000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if ( sortedornot(arr,n) == false){
        cout << "false";
    }
    else{
        cout <<  "true";
    }


}
