// https://hack.codingblocks.com/app/contests/4001/190/problem

// subse bada element apni correct position pe

#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin >> n;
    int i, j;
    for(i = 0; i <= n-1; i++){
        cin >> arr[i];
    }
    for(i=0; i <= n-2; i++){        //-- or ++      
        for(j = 0; j <= n-2-i; j++){
            if(arr[j] > arr[j + 1]){
                swap (arr[j], arr[j + 1]);
            //  c = a;
            //  a = b;
            //  b = c;

            //  int c = arr[j];
            //  arr[j] = arr[j + 1];
            //  arr[j + 1] = c;


            }
        }
    }
   for(i= 0; i <= n-1; i++){
    cout << arr[i] <<endl;
   }
    return 0;
}
