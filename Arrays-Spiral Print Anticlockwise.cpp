// https://hack.codingblocks.com/app/contests/4001/411/problem

#include<iostream>
using namespace std;
void spiralprint(int arr[100][100],int tr,int tc ){

	int sr=0;
	int er=tr-1;
	int sc=0;
	int ec=tc-1;

	while(sr <= er && sc <= ec){

		for(int j=sr;j<=er;j++){
            cout<<arr[j][sc]<<", ";		
        }
		sc++;

		for(int k=sc;k<=ec;k++){
            cout<<arr[er][k]<<", ";
        }
        er--;

		if(sc <= ec){
			for(int m=er;m>=sr;m--){
				cout<<arr[m][ec]<<", ";
			}
			ec--;
		}

		if(sr <= er){
			for(int d=ec; d >=sc; d--){
				cout << arr[sr][d]<< ", ";
			}	
		    sr++;
		}
	}
	cout << "END";
}

int main() {

	int rowno, colno;
	cin >> rowno >> colno;

	int arr[100][100];
	for(int i = 0; i < rowno; i++){
		for(int j = 0; j < colno; j++){
			cin >> arr[i][j];
		}
	}
	spiralprint(arr,rowno,colno);

	return 0;
}
