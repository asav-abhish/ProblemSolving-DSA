// https://hack.codingblocks.com/app/contests/4001/1055/problem

n = 7
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

  #include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            if(i==1){
                if(j==1 || j>=(N+1)/2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else if(i<(N+1)/2){
                if(j==1 ||j==(N+1)/2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else if(i==(N+1)/2){
                cout<<"*";
            }
            else if(i<=N-1){
                if (j==(N+1)/2 || j==N){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(j<=(N+1)/2 || j==N){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
		cout<<endl;
    }
}

    
