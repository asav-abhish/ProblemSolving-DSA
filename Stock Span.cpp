// https://hack.codingblocks.com/app/contests/4001/502/problem

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}

	vector<int>v;
    stack<int> s;
       
       for(int i=0; i<n; i++){
           while(!s.empty() && arr[s.top()] <= arr[i]){
               s.pop();
           }
           if(s.empty()){
               s.push(i);
               v.push_back(i+1);
           }
           else{
               v.push_back(i-s.top());
               s.push(i);
           }
       }
	
	
	
	
	for(int i=0; i<v.size(); i++){
		cout << v[i] <<" ";
	}cout << "END" << endl;

	

	return 0;
}
