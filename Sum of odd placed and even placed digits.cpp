// https://hack.codingblocks.com/app/contests/4001/25/problem

#include<iostream>
using namespace std;
int main() {

    long long int n, evensum=0, oddsum=0, ld;
    cin >> n;
    int count = 0;
    if(n == 0)
        count = 1;
    while(n > 0){
        ld = n % 10;
        n = n / 10;
        count += 1;

        if(count % 2 == 0){
            evensum += ld;
        }
        else{
            oddsum += ld;
        }
        
    }
    

        
  //  cout << count<<endl;
   
    cout << oddsum<<endl;
 cout << evensum<<endl;
	return 0;
}
