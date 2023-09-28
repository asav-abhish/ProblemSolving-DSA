// https://hack.codingblocks.com/app/contests/4001/722/problem

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int xr = 0;
	for(int i = a; i <=b; i++ ){
	xr = max (xr, i ^ b);
	}
	cout << xr;
	
    
}
