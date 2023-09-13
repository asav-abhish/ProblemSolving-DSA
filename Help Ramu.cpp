// https://hack.codingblocks.com/app/contests/4001/1089/problem

#include<iostream>
#include <algorithm>
using namespace std;
int main() {
	int t;
	cin >> t;

	
	
	

	for(int k = 1; k <= t; k++){
		int c1,c2,c3,c4;
		cin >> c1 >> c2 >> c3 >> c4;
		 //m cab | n rickshaw;
		int n, m; 
		cin >> n >> m;

		int rickshaw = 0, cab = 0, ai, bi;

		for(int i=1; i<= n; i++){
			cin >> ai;
			rickshaw = rickshaw + min(ai * c1, c2);

		}
		int allrickshaw = min (rickshaw , c3);

		for(int j=1; j <= m; j++){
			cin >> bi;
			cab += min(bi * c1, c2);
		}
		int allcab = min (cab , c3);

	//	total cost of rickshaw= min ( min( i * c1, c2) + min ( i * c1,c2), c3);
								
	//	total cost of cabs = min ( min (j * c1), c2 + min(j * c1), c2), c3);						  
		
		int ans  = min ((allrickshaw + allcab) , c4);
		cout << ans<< endl;
	}

	return 0;
}
