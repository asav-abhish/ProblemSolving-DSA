// https://hack.codingblocks.com/app/contests/4001/503/problem

#include<iostream>
using namespace std;

int lengthofarr(char ar[100] ){
    int i = 0;
    while (ar[i] != '\0'){
        i++;
    }
    return i;
}
bool reverse (char ar[100] ){
    int i = 0;
    int j = lengthofarr(ar) - 1;

    while(i < j){
		if(ar[i] == ar[j]){
      		swap ( ar[i++] , ar[j--] );
		}
		else{
			return 0;
		}
    }
	return 1;
}

int main(){
char ar[1000];
cin.getline(ar, 1000);
if (reverse(ar)== 0){
	cout << "false";
}
else{
	cout << "true";
}
}
