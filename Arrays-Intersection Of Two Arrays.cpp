// https://hack.codingblocks.com/app/contests/4001/173/problem

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int v[100000];
	int a[100000];
	int b[100000];
	int m =0;
    for(int i = 0; i<= n-1; i++){
        cin >> a[i];
    }
	for(int i = 0; i<= n-1; i++){
        cin >> b[i];
    }
	for(int i = 0; i<= n-1; i++){

		int ele = a[i];
        for(int j = 0; j<= n-1; j++){
			if( ele == b[j] ){
				v[m] = ele;
				m++;
				b[j] = -1;
				break;
			}
    }
}
sort ( v, v + m );

cout << "[" ; 
for(int i = 0; i <= m-2; i++){
	cout << v[i] <<"," << " " ;
}	
cout <<v[m-1] << "]" << endl;

	return 0;
}
