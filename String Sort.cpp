// https://hack.codingblocks.com/app/contests/4001/966/problem

#include <bits/stdc++.h>
using namespace std;
bool mycomp(string s1, string s2){  //bat apple 
	int l1 = s1.length();
	int l2 = s2.length();

	if(l1 > l2 and s2 == s1.substr(0,l2)){
		return true;
	}
		return s1<s2;
	
	
}
int main() {
	int n;
	cin >> n;
	cin.ignore();
	string arr[10000];

	for(int i = 0; i< n; i++){
		cin >> arr[i];
	}
	sort(arr,arr+n,mycomp);

	// for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]==arr[j].substr(0,arr[i].length())){
                
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    // }
	for(int i = 0; i < n; i++)
		cout << arr[i] << endl;
	return 0;
}

