// https://hack.codingblocks.com/app/contests/4001/1379/problem

#include<iostream>
using namespace std;
int co;
void subseq(char arr[10000], char out[10000], int i, int j){
//base base

    if(arr[i]=='\0'){
		out[j]='\0';
		cout<<out<< " ";
		co++;
		return;
    }

	//without a
	subseq(arr,out,i+1,j);
// with a
    out[j] = arr[i];
    subseq(arr,out,i+1,j+1);
    

    
}
int main(){
    char arr[10000];
    cin.getline(arr,10000); //abc
    char out[10000];
    subseq(arr,out,0,0);
	cout << endl;
	cout << co;
}
