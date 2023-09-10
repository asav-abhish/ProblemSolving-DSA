// https://hack.codingblocks.com/app/contests/4001/217/problem

#include<iostream>
using namespace std;
int main(){
   long long int n;
	cin >> n;
    long long int  ans = 0;
    while(n > 0){
        int ld = n % 8;
        n /= 8;
        ans = ans * 10 + ld;
    }

	int ld,sum=0;


int reverse=0;
while(ans>0){
	ld = ans%10;

reverse=reverse*10 +ld;
sum=sum+ld;

    ans/=10;
} 
cout<<reverse<<endl;

}
