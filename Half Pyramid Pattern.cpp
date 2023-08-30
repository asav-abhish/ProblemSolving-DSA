/*
  https://hack.codingblocks.com/app/contests/4001/1797/problem
n = 5

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5

  */

#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
int rowno=1;
while(rowno<=N){
//row
int p=1;
int i=1;
while(i<=rowno){
    cout<<p<<" ";
    i+=1;
    p+=1;
}
cout<<endl;
rowno+=1;
}


    return 0;
}
