// https://hack.codingblocks.com/app/contests/4001/394/problem

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <string> v;
void permutation(char arr[], int i){
    if(arr[i] == '\0'){
		v.push_back(arr);
        //cout << arr << endl;
        return;
    }

    for ( int j = i; arr[j] != '\0'; j++){
         swap(arr[j] , arr[i]);
        permutation(arr,i+1);
        swap(arr[j] , arr[i]);
    }
}
int main(){
    char arr[1000];
    cin.getline(arr,1000);

    permutation(arr,0);
	sort(v.begin(),v.end());
	int i;
	for( i =0; i<v.size(); i++){
		if(arr == v[i]){
			break;
		}
	}
	for(int io =i+1; io<v.size(); io++){
		cout << v[io] << endl;
	}

}
