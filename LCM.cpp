// https://hack.codingblocks.com/app/contests/4001/215/problem

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long long int n1,n2;
    	cin >> n1 >> n2;
		

	for(int i = 1; i <= pow(10,9); i++){
		
		if(i % n1 == 0 && i % n2 == 0){
			cout << i;
			return 0;
		}
	
	}
	return 0;

}
