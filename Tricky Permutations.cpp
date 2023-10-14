// https://hack.codingblocks.com/app/contests/4001/1290/problem

#include<iostream>
#include<set>
using namespace std;
set <string> s;
void permutation(char arr[], int i){
    if(arr[i] == '\0'){
		s.insert(arr);
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
	 for (auto& str : s) {
        std::cout << str << endl;
    }
	
}
