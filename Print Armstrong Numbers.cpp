// https://hack.codingblocks.com/app/contests/4001/291/problem

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n1,n2;
	cin>>n1>>n2;

	while(n1<n2){
		int count=0;
		int n3=n1;
		int n4=n1;
		while(n3!=0){
			int rem =n3%10;
			n3/=10;
			count++;
		}int ans=0;
		while(n4!=0){
			int rem2=n4%10;
			n4/=10;
			ans=ans+pow(rem2,count);
		}
		if(n1==ans){
			cout<<n1<<endl;
		}
		n1++;
		
	}

}
