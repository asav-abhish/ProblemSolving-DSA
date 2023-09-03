// https://hack.codingblocks.com/app/contests/4001/488/problem 
 n = 5;
             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5 

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int sp = 2*n-1;
	int st = 1;
	for(int i = 1; i <= 2*n+1; i++){
		int val = n;
		for(int j = 1; j <= st; j++){
			cout << val <<" ";
			val--;
		}
		for(int j = 1; j<= sp; j++){
			cout << "  ";
		}
		val++;
		for(int j = 1; j<= st; j++){
			if(i == (2*n/2)+1 && j == 1){
				val++;
				continue;
			}
			cout << val <<" ";
			val++;
		}
		cout << endl;
		if(i < (2*n)/2 + 1 ){
			st++;
			sp-=2;
		}
		else{
			st--;
			sp+=2;
		}
	}
	return 0;
}
