// https://hack.codingblocks.com/app/contests/4001/100/problem

#include<iostream>
using namespace std;
int main() {
	int N, ld,sum=0;
	cin>> N;

int reverse=0;
while(N>0){
	ld = N%10;

reverse=reverse*10 +ld;
// sum=sum+ld;

    N/=10;
} 
// cout<<sum<<endl;
cout<<reverse<<endl;

	return 0;
}
