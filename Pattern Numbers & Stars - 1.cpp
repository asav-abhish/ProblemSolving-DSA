//  https://hack.codingblocks.com/app/contests/4001/1266/problem

1 2 3 4 5
1 2 3 4 * 
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *
 

#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int st=-1;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=(N-i)+1; j++){
            cout<<j<<" ";
        }
        for(int j=1; j<=st; j++){
            cout<<"*"<<" ";
        }cout<<endl;
    st+=2;
    }

    return 0;
}
