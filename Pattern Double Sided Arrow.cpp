//https://hack.codingblocks.com/app/contests/4001/75/problem
/*
n = 7;
            1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1 

  */

#include<iostream>
using namespace std;
int main(){
	  int n;
		cin >> n;
		int st = 1;
		int sp1 = n-1;
		int sp2 = -1;
		int val = 1;
for(int i = 1; i<= n; i++){
    int cval = val;
    int dval = 1;
    for(int j = 1; j <= sp1; j++){
        cout << "  ";
    }
    for(int j = 1; j <= st; j++){
        cout << cval <<" ";
        cval--;
      
    }
    for(int j = 1; j <= sp2; j++){
        cout << "  ";
    }
    for(int j = 1; j <= st; j++){
        if(i == 1 && j == 1 || j==1 and i==n){
            continue;
        }
        cout << dval << " ";
        dval++;
    }
    if( i < (n+1)/2){
        sp1-=2;
        sp2+=2;
        st ++;
        val++;
    }
    else{
        sp1+=2;
        sp2-=2;
        st -=1;
        val--;
    }
    
    cout << endl;
}

	
}
