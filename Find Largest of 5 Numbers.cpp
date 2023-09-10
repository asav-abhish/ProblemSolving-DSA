// https://hack.codingblocks.com/app/contests/4001/48/problem

#include<iostream>
using namespace std;
int main(){

int a,b,c,d,e;
cin>>a>>b>>c>>d>>e;

if(b<a and c<a and d<a and e<a){
cout<<a;
}

else if(a<b and c<b and d<b and e<b){
    cout<<b;
    }
else if(a<c and c>b and d<c and e<c){
    cout<<c;
}
else if(a<d and d>b and d>c and e<d){
    cout<<d;
}
else{
	cout<<e;
}
    return 0;
}
