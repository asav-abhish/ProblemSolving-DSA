// https://hack.codingblocks.com/app/contests/4001/1003/problem

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++){
		vector <int> v;
        int n, j, k;
        cin >> n;
        int a[n];
        for(int j = 0; j <= n-1; j++){
            cin >> a[j];
        }
		sort(a,a+n);
        int m;
        cin >> m;

        for( j = 0; j <= n-2; j++){
            for( k = j+1 ; k <= n-1; k++){

                if(a[j] + a[k] == m){
					v.push_back(a[j]);
					v.push_back(a[k]);
                }
            }
        }
	
		cout << "Deepak should buy roses whose prices are " << v[ v.size()-2 ] << " and " << v[ v.size()-1 ] << '.' <<endl;
    
	}
}
