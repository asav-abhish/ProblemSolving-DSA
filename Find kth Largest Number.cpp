// https://hack.codingblocks.com/app/contests/4001/1337/problem


#include <iostream>
#include<queue>
using namespace std;
int main() {
priority_queue <int ,vector <int>, greater <int> > h;
	int n;
	cin>>n;
	int k;
    cin>>k;
	
	int arr[n];
	for(int i=0; i<n; i++){
       cin>>arr[i];
	}
    int co=0;
    int index=0;

    while(index < n){
         if(co< k){
            h.push(arr[index]);
            index++;
            co++;
        }
        else{
            if(h.top() < arr[index]){
                h.pop();
                h.push(arr[index]);
            }
            index++;
        }
    }
   cout << h.top();

	return 0;
}
