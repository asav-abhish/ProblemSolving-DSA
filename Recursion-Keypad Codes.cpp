// https://hack.codingblocks.com/app/contests/4001/1375/problem

#include<iostream>
using namespace std;
string arr[]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int co = 0;
void phonekeypad(char inp[1000], char out[1000], int i, int j){
    //base case
    if(inp[i] == '\0'){
        out[j] = '\0';
        cout << out << " ";
		co++;
        return;
    }

    //rec case
    char ch = inp[i];  //char aya h
    int index = ch - '0';
    for (int k = 0; arr[index][k]!= '\0'; k++ ){
        out [j] = arr[index][k];
        phonekeypad(inp,out,i+1,j+1);
    }
    
}
int main(){
    char inp[1000];
    cin >> inp;    //23
    char out[1000];
    phonekeypad(inp,out,0,0);
	cout << '\n';
	cout << co;
}
