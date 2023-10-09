// https://hack.codingblocks.com/app/contests/4001/543/problem

#include<iostream>
#include <vector>
#include<cstring>
using namespace std;
string ans[100000];
int counter = 0;
void generateparenthesis(int n,int ob,int cb,char out[1000],int j){
	// base case
	if(cb==n){
		out[j]='\0';
		ans[counter] = out;
		counter++;
		//cout<<out<<endl;
		return;
	}


	// rec case
	if(ob<n){
        out[j]='(';
		generateparenthesis(n,ob+1,cb,out,j+1);

	}

	if(ob>cb){
		out[j]=')';
		generateparenthesis(n,ob,cb+1,out,j+1);

	}
	

}

int main(){
	int n;
	cin>>n;
	char out[1000];
	generateparenthesis(n,0,0,out,0);
	for (int i = counter -1; i >= 0; i--){
		cout << ans[i] <<endl;
	}
	
	return 0;
}
