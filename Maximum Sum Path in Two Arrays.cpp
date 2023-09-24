// https://hack.codingblocks.com/app/contests/4001/552/problem

#include<iostream>
#include<cmath>
using namespace std;
int main (){
    int t;
	cin >> t;
	for(int test = 1; test <= t; test++){
		int m, n;
		cin >> m >> n;

        int ar1[100000], ar2[100000];

        for(int j = 0; j < m; j++)
			cin >> ar1[j] ;
		
		for(int j = 0; j < n; j++)
			cin >> ar2[j] ;
        
        int sum1 = 0, sum2 = 0, result = 0;
        int i=0,j=0;

        while( i < m && j < n ){
            if (ar1[i] < ar2[j]){
                sum1 += ar1[i];
                i++;
            }

            else if (ar1[i] > ar2[j]){
                sum2 += ar2[j];
                j++;
            }

            else{
                result += max(sum1,sum2) + ar1[i];
                i++;
                j++;
                sum1 = 0;
                sum2 = 0;
            }
        }
        while (i < m){
            sum1 += ar1[i++];
        }
        while (j < n){
            sum2 += ar1[j++];
        }
        result += max(sum1,sum2);
        cout << result << endl;
    }
}
