// https://hack.codingblocks.com/app/contests/4001/853/problem

#include<iostream>
using namespace std;
int main() {
	int no, n, ld;
	cin >> no;

	for(int i = 1; i <= no; i++){
		cin >> n;
        int even = 0, odd = 0;
		while(n > 0){

			ld = n % 10;
            if(ld % 2== 0 || ld == 0){
                even += ld;
            }
            else{
                odd += ld;
            }
			n /= 10;
		}
        if (odd % 3 == 0 || even % 4 == 0 ){
            cout << "Yes" << endl;
            }
        else{
                cout << "No"<< endl;
            }
    }
}

