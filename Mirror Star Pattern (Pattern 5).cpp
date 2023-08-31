// https://hack.codingblocks.com/app/contests/4001/192/problem
// n = 5
      *
   *  *  *  
*  *  *  *  *  
   *  *  *
      *

#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int rowno=1;
    while(rowno<=(N+1)/2){

    int i=1;
    while(i<=N/2-rowno+1){
       cout<<"  ";
       i=i+1;
    }
    int j=1;
    while(j<=(2*rowno)-1){
        cout<<"* ";
        j+=1;
    }
    cout<<endl;
    rowno+=1;
    }
while (rowno<=N){
//row
int k=1;
while(k<=rowno-(N+1)/2){
    cout<<"  ";
    k+=1;
}
int l=1;
while(l<=2*(N-rowno)+1){
    cout<<"* ";
    l+=1;
}
cout<<endl;
rowno+=1;
}

    return 0;
}



   
