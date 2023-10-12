// https://hack.codingblocks.com/app/contests/4001/383/problem

#include<iostream>
using namespace std;
int sol[1000][1000]={0};
int co = 0;
bool kyamaidaalsaktahunyanahi(int i,int j,int n){
	// vertical check
	for(int k=1;k<i;k++){
		if(sol[k][j]==1){
			return false;
		}
	}

	// horizontal check
	for(int k=1;k<j;k++){
		if(sol[i][k]==1){
			return false;
		}
	}
    // left dia
    int u = i - 1;
    int v = j - 1;

    while( u >= 1 and v >= 1){
        if (sol[u][v] == 1){
        return false;
        }
        u--;
        v--;
    }
    
    // right dia
    int a = i - 1;
    int b = j + 1;

    while(a >= 0 and b < n){
        if (sol[a][b] == 1 ){
            return false;
        }
        a--;
        b++;
    }

    return true;

}

bool nqueen (int n, int i){
    if  ( i == n+1){
		co++;
        for(int l=1;l<n+1;l++){
			for(int k=1;k<n+1;k++){
				//cout<<sol[l][k]<<" ";
				if(sol[l][k] == 1){
					cout << "{" << l << "-" << k << "}" << " ";
				}
			}
		}
        cout << " ";
        return false;
        //return true;
    }

    for ( int j = 1; j < n+1; j++){
        if(kyamaidaalsaktahunyanahi(i,j,n+1)==true){
            sol[i][j] = 1;
            bool ans = nqueen(n,i+1);
            if (ans == true){
                return true;
            }
            sol[i][j]=0; // AGAR FALSE DIYA REC NE
        }
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    nqueen(n,1);
	cout << endl;
	cout << co;
}
