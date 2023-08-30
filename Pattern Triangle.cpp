//https://hack.codingblocks.com/app/contests/4001/189/problem

/* n=4
                      1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4

  */
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int rowno=1;
    while(rowno<=N){
    
    //for 1 row 
    //spaces
    int a=rowno;
    int i=1;
    while(i<=N-rowno){
        cout<<"		";
        i=i+1;
    }
    //number
    int j=1;
    while(j<=rowno){
        cout<<a<<"		";
        j=j+1;
        a=a+1;
    }
    //2nd half
    int o=(2*rowno)-2;
    int k=1;
    while(k<=rowno-1){
        cout<<o<<"		";
        k=k+1;
        o=o-1;
    }
    cout<<endl;
    rowno=rowno+1;
    }
    return 0;
}
