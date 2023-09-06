// https://hack.codingblocks.com/app/contests/4001/1798/problem
/*
n = 5

        * 
      * * 
    * * * 
  * * * * 
* * * * *

  */

  #include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
    int rowno=1;
	while(rowno<=N){
	int i=1;
	while(i<=N-rowno){
		cout<<"  ";
		i++;
	}
	int j=1;
	while(j<=rowno){
		cout<<"*"<<" ";
		j++;
	}
	cout<<endl;
	rowno+=1;
	}
	 

	return 0;
}
