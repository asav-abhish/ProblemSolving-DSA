// https://hack.codingblocks.com/app/contests/4001/1051/problem

#include<iostream>
using namespace std;
int main() {
	int n,m,k,s;
	cin >> n >> m >> k >> s;
	if(k > s){
		cout <<"No";
		return 0;
	}
	char ch [100][100];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> ch[i][j] ;
		}
	}
    int io;
	for( io = 0; io < n; io++){
		for(int j = 0; j < m; j++){
			if(ch[io][j] == '#'){
				break;
			}
			else if ( ch [io][j] == '.'){
				s -= 3;
			}
			else if (ch [io] [j] == '*'){
				s += 4;
			}
			if (j == m - 1){
				s +=1;
			}
		}
		
		if(k > s){
			cout << "No";
			return 0;
		}
	}
	if(io == n){
		cout << "Yes" << endl;
		cout << s;
	}

	
	return 0;
}
