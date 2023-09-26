// https://hack.codingblocks.com/app/contests/4001/65/problem

#include<iostream>
using namespace std;
int main() {
int t;
cin >> t;

for(int k = 1; k <= t; k++){
	int a, b;
	cin >> a >> b;
	int count = 0;
	
	for(int i = a; i <= b; i++){
		int j = i;
		while (j > 0){
			if (j % 2 == 1){
				count++;
			}
			j /= 2;
		}
			
	}
	cout << count << endl;
}
	return 0;
}
