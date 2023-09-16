// https://hack.codingblocks.com/app/contests/4001/696/problem

#include<iostream>
using namespace std;
int main(){

    int t;
    cin >> t;
    for( int k = 1; k <= t; k++){
    int m, n;
    cin >> m >> n;
  
  int p = 1;
  int q = 2;
  int odd = 0;
  int even = 0;
    for(int i=1;i<=1001;i++){
        
        odd = odd + p;
        p += 2;

        even = even + q;
        q += 2;

        if(odd>m){
            cout << "Harshit" << endl;
            break;
        }else if(even>n){
            cout<<"Aayush"<<endl;
            break;
        }
        // else{
        //     continue;
        // }
      }
    }

return 0;
}
