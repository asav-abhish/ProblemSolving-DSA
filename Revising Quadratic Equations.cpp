// https://hack.codingblocks.com/app/contests/4001/1320/problem



#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int d=(b*b)-4*a*c;
    int e=sqrt(d);
    if(e>0){
    	cout<<"Real and Distinct"<<endl;
    	cout<<((-b) - e)/2*a<<" "<<((-b) + e)/2*a;
	}
	else if(e==0){
		cout<<"Real and Equal"<<endl;
		cout<<(-b)/2*a<<" "<<(-b)/2*a;
	}else{
		cout<<"Imaginary";
	}
    
 }
