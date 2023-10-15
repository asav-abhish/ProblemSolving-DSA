// https://hack.codingblocks.com/app/contests/4001/11/problem

#include<iostream>
using namespace std;
int sol[1000][1000] = {0};
bool ratinamaze(char arr[][1000],int i, int j, int tr, int tc){
    if(i == tr-1 and j == tc-1){
        sol[i][j] = 1;
        for(int k=0; k < tr; k++){
            for(int l = 0; l < tc; l++){
                cout << sol[k][l] << " ";
            }cout << endl;
        }
        cout << endl;

        sol[i][j] = 0; //BACKTRACK
        return false; //FOR MULTIPLE OUTPUTS
        //return true;
    }


    sol[i][j] = 1;
    if ( j < tc-1 && arr[i][j+1] != 'X' && sol[i][j+1] != 1){
        if ( ratinamaze(arr,i,j+1,tr,tc) == true){
            return true;
        }
    }
    if ( i < tr-1 && arr[i+1][j] != 'X' && sol[i+1][j] != 1 ){
        if ( ratinamaze(arr,i+1,j,tr,tc) == true){
            return true;
        }
    }
	if(i > 0 && arr[i-1][j] != 'X' && sol[i-1][j]!= 1){
		if (ratinamaze(arr,i-1,j,tr,tc) == true){
			return true;
		}
	}
	if(j > 0 && arr[i][j-1] != 'X' && sol[i][j-1]!= 1){
		if  ( ratinamaze(arr,i,j-1,tr,tc) == true){
			return true;
		}
	}

    sol[i][j] =  0;
    return false;

}
int main(){
     char arr[1000][1000];
	// 	"UUBU",
	// 	"BUBB",
	// 	"BUUB",
	// 	"BUUU"

	// };
    int tr,tc;
    cin >> tr >> tc;
    for(int i = 0; i <  tr; i++){
        for(int j = 0; j < tc; j++){
            cin >> arr[i][j];
        }
    }
// int tr = 4;
// int tc = 4;

    if ( ratinamaze(arr,0,0,tr,tc) == false){
		cout <<"-1";
	}
}
