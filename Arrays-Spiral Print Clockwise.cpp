// https://hack.codingblocks.com/app/contests/4001/991/problem


#include<iostream>
using namespace std;
void spiralprint(int arr[100][100],int tr,int tc, int te){

	int count = 0;

    // if(tr == 1 && tc == 1){
        
    //     cout << arr[0][0] << ", END" << endl;
    // }
    
    // else{
        int sr=0;
    	int er=tr-1;
    	int sc=0;
    	int ec=tc-1;

    	// loop
    	while(er>=sr and ec>=sc){
		
    		// start row print
            for(int j=sc;j<=ec;j++){
                    cout<<arr[sr][j]<<", ";
					count++;
            }
            sr++;
            // last col
            for(int k=sr;k<=er;k++){
                cout<<arr[k][ec]<<", ";
				count++;
            }
            ec--;

			if(count == te){
				break;
			}
            // last row
			for(int m=ec;m>=sc;m--){
			cout<<arr[er][m]<<", ";
			count++;
			}
            er--;
            
            if(count == te){
				break;
			}
        	// ist col
			for(int l=er;l>=sr;l--){
				cout<<arr[l][sc]<<", ";
				count++;
			}
            sc++;
            
        }
        cout << "END";
    }


int main(){

	int arr[100] [100];

	int rowno;
	int colno;
	cin >> rowno >> colno;
	int te = rowno * colno;

	for(int i=0;i<rowno;i++){
		for (int j=0;j<colno;j++){
		cin >> arr[i][j];
		}
	}

	spiralprint(arr,rowno,colno, te);
	
	return 0;
}
