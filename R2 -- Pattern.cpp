//https://hack.codingblocks.com/app/contests/4001/54/problem

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;  //tr

	if(n%2==0){
       int i=n-1;
	   while(i>=1){
		   cout<<i<<endl;
		   i=i-2;
	   }
	   i=i+3;
	   while(i<=n){
		   cout<<i<<endl;
		   i=i+2;
	   }
	}
	else{
		int j=n;
		while(j>=1){
			cout<<j<<endl;
			j=j-2;
		}
		j=j+3;
		while(j<=n){
            cout<<j<<endl;
			j=j+2;
		}
	}
	return 0;
}
