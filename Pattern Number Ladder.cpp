
// https://hack.codingblocks.com/app/contests/4001/224/problem
// n = 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10



#include<iostream>
using namespace std;
int main(){
int tr;
cin>>tr;
int rowno=1;
int no=1;

while(rowno<=tr){

//for row no.3
int i=1;
while(i<=rowno){
    cout<<no<<" 	";
    i=i+1;
    no=no+1;
}
cout<<endl;
rowno=rowno+1;

}
    return 0;
}
