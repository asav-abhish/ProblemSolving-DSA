// https://hack.codingblocks.com/app/contests/4001/61/problem

#include<iostream>
using namespace std;
int mod = 1e9 + 7;


int main(){
    int n, x;
    cin >> n;
    int ar[n];
	long long sum = 0;
    for(int i = 0; i <= n-1; i++){
        cin >> ar[i];
		sum  = (sum + ar[i]) % mod;
    }
   
    int op;
    cin >> op;
    for(int i = 1; i <= op; i++){    //ye loop chal rha dusri baar.
        
        cin >> x;
		sum = (2 * sum ) % mod;
	}  
	cout<<sum<<endl;  
}
