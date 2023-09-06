// https://hack.codingblocks.com/app/contests/4001/201/problem

#include<iostream>
using namespace std;
int main() {
	int N1, N2, ans;
	cin >> N1 >> N2;

	for (int i = 1; i <= N1; i++){

		ans = (3 * i) + 2; 
		if(ans % N2 == 0){
			N1++;
		}
		else{
			cout << ans << endl;
		}
	}
	return 0;
}
