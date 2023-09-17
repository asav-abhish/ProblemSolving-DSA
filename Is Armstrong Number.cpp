// https://hack.codingblocks.com/app/contests/4001/1102/problem

#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int n;
   cin>>n;
   int n2=n;
   int n3=n;
   int count =0;
   while(n!=0){
   	int rem=n%10;
   	n=n/10;
   	count++;
   	
   }
   int ans=0;
   
   while(n2!=0){
   	int rem1=n2%10;
   	n2/=10;
   	ans=ans +pow(rem1,count);
   }
   if(n3==ans){
   	cout<<"true";
   }else{
   	cout<<"false";
   }
}
