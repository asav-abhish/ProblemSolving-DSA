// https://hack.codingblocks.com/app/contests/4001/471/problem

#include<iostream>
using namespace std;
void waveprint(int arr[10][10],int tr,int tc){
	for(int cn=0; cn<tc; cn++){
		if(cn%2==0){
		// cn even hai -->downward print
			for(int j=0; j<tr; j++){
				cout<<arr[j][cn]<<"," << " ";
			}
        }
        else{
            // cn is odd -->upward print
            for(int j=tr-1;j>=0;j--){
                cout<<arr[j][cn]<<", ";
            }            
        }
        
	}
	cout << "END";
}
int main(){
	
	int arr[10][10];
	int m, n;
	cin >> m >> n;

	for(int i=0;i<m;i++){
		for (int j=0;j<n;j++){
		cin >> arr[i][j];
		}
	}
	
	waveprint(arr,m,n);
	return 0;
}
