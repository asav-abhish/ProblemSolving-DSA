// https://hack.codingblocks.com/app/contests/4001/501/problem

#include<iostream>
using namespace std;
int main() {
	int m,n;
	cin >> m >> n;
	int key;
	if (m == 1 && n == 1){
		int num;
		cin >> num >> key;
		if(num == key){
			cout << 1;
			return 0;
		}
		else{
			cout << 0;
			return 0;
		}
	}
	else{
		int arr [100] [100];
		

		for(int o=0;o<m;o++){
			for(int j=0;j<n;j++){
			cin >> arr[o][j];
			}
		}
		cin >> key;
		int i;
		int j;
		for( i=0;i<m;i++){
			for ( j=0;j<n;j++){
				if(arr[i] [j] == key ){
					cout << 1;
					return 0;
				}
			}
		}
		
		cout << 0;
	}
	return 0;
}
