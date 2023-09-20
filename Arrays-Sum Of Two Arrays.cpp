// https://hack.codingblocks.com/app/contests/4001/931/problem

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
	vector <int> v;

    for(int i = 0; i <= n-1; i++){
        cin >> a[i];
    }

	int sum, power = 0, m;
    cin >> m;
    int b[m];

    for(int i = 0; i <= m-1; i++){
        cin >> b[i];
    }

	while( n >= 1 && m >= 1){

		sum = a[n-1] + b[m-1] + power;

		//cout << a[n-1] << " " << b[m-1] << endl;
		m--;
		n--;
		if (sum >= 10){
			int ld = sum % 10;
			v.push_back(ld); 
			power = sum / 10;	
		}
		else{
			//  cout << sum <<endl;
			v.push_back(sum);
			power = 0;
		}	 
	}
	//   cout << n << " " << m << endl;
	if(m != 0){
		for (int i = m-1; i >= 0; i--){
			int ans = b[i] + power;
			if ( ans > 9){
				int lld = ans % 10;
				v.push_back(lld);
				power = ans / 10;
			}
			else{
				v.push_back(ans);
				power = 0;
			}
		}
	}

	else if(n != 0){
		for(int i = n-1; i >= 0; i--){
			int ans = a[i] + power;
			if ( ans > 9){
				int lld = ans % 10;
				v.push_back(lld);
				power = ans / 10;
			}
			else{
				v.push_back(ans);
				power = 0;
			}
		}
	}

	if (power > 0){
		v.push_back(power);
	}

        // cout << v.size() << endl;
	for (int i = v.size()- 1; i >= 0; i--){
		cout << v[i] << "," << " ";
	}
	cout << "END";
}
