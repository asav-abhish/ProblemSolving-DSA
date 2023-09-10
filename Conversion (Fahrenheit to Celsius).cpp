// https://hack.codingblocks.com/app/contests/4001/560/problem

#include<iostream>
using namespace std;
int main(){
int i,f,s,c;
 cin>>i; 
cin>>f; 
cin>>s;

 float a=5;
     float b=9;

for (int j = i; j <= f; j+=s){

     c = (a/b) * (i-32);
       
	   cout<<i<<"	";
     cout<< c<<"	"<<endl;
     i+=s;

}
        return 0;
    }
