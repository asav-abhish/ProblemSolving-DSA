// https://hack.codingblocks.com/app/contests/4001/1094/problem

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int m;
	cin >> m;
	for(int i = 0; i < m; i++){
		int A,k;
		cin >> A >> k;
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if( A % arr[j] == 0 ){
				cnt++;
			}
		}
		cout << cnt;
		if ( cnt >= k ){
			cout << "Yes" << endl;
		}
		else{
			cout << "No"<<endl;
		}
    }
	return 0;
}
