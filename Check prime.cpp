// https://hack.codingblocks.com/app/contests/4001/919/problem

#include<iostream>
using namespace std;
int main(){
int N;
cin>> N;
        
        
        for(int i=2; i<=N-1; i++){
 
            if(N%i==0){
                cout<<"Not Prime";
                return 0;
            }
        }
                cout<<"Prime";
            
        return 0;
}
