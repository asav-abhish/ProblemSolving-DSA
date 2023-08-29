//https://hack.codingblocks.com/app/contests/4001/41/problem
/*
n = 5;

*	*	* * *		  
*	*	  * *
* 	    *
* *   * *
* *	* * *

*/

#include<iostream>
using namespace std;
int main(){

    int n, sp, st;
    cin >> n;
    sp = -1;
    st = (n + 1) / 2;

   
    for( int j=1; j <= n; j++){ 
        for(int i = 1; i <= st; i++){
        cout << "*	";
        }

        for(int i = 1; i <= sp; i++){
            cout <<"	";
        }

        for(int i = 1; i <= st; i++){
            if(i == 1 && j == 1 || i == 1 && j == n){
                continue;
            }
            cout << "*	";
        }
        if(j < (n + 1) / 2 ){
            st -= 1;
            sp += 2;
        }
        else{
            st += 1;
            sp -= 2;
        }
        cout<< endl;
    }
    
}


