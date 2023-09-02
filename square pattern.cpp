// https://hack.codingblocks.com/app/contests/4001/1809/problem
// n = 5

// 1 2 3 4 5 
// 2 2 3 4 5 
// 3 3 3 4 5 
// 4 4 4 4 5 
// 5 5 5 5 5
  
#include<iostream>
using namespace std;
int main() {
	int N;
	cin>>N;
	int a = 1;
	for(int i = 1; i <= N; ++i){
		for(int j = 1; j<= N; j++){
			if(j <= i){
				cout << a << " ";
			}
			else{
				cout << ++a <<" ";
			}
		}
		a = i+1;
		cout << endl;
	}
	return 0;
}
