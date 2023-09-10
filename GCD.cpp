// https://hack.codingblocks.com/app/contests/4001/1040/problem

#include <iostream>
using namespace std;

int main(){

int N1, N2;
cin >> N1;
cin >> N2; 

if(N1 > N2){

    for(int i = N2; i >= 2; i --){

        if(N1 % i == 0 && N2 % i == 0){

            cout << i;
            return 0;
        }

    }

}

else{

    for(int i = N1; i >= 2; i-- ){

        if(N2 % i == 0 && N1 % i == 0){

            cout << i;
            return 0;
        }
    }
}
return 0;
}
