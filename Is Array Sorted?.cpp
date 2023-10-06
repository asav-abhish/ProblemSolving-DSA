// https://hack.codingblocks.com/app/contests/4001/519/problem

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[10000];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
bool flag = true;
	for(int i = 0; i< n-1; i++){
		if (arr[i+1] < arr[i]){
			flag = false;
			break;
		}
	}
	if ( flag == false){
		cout << "false" << endl;
	}
	else {
		cout << "true" << endl;
	}
	return 0;
}
