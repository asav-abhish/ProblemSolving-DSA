// https://hack.codingblocks.com/app/contests/4001/410/problem

#include<iostream>
using namespace std;
void waveprint(int arr[10][10],int tr,int tc){
	for(int cn=0; cn<tr; cn++){
		if(cn%2==0){
		// cn even hai -->forward print
			for(int j=0; j<tc; j++){
				cout<<arr[cn][j]<<"," << " ";
			}
        }
        else{
            // cn is odd -->backward print
            for(int j=tc-1;j>=0;j--){
                cout<<arr[cn][j]<<", ";
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
