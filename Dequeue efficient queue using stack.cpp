// https://hack.codingblocks.com/app/contests/4001/455/problem

#include<iostream>
#include<stack>
using namespace std;
class Queue{
	stack<int> s1;
	stack<int> s2;
public:

	// push
	void push(int d){
		if(s1.empty() and s2.empty()){
			s1.push(d);
		}
		else if(!s1.empty() and s2.empty()){
			s1.push(d);
		}
	}

	// pop
	void pop(){
		if(s1.empty() and s2.empty()){
			return;
		}
		else if(!s1.empty() and s2.empty()){
			// shift s1 se s2 mai elemts
			while(s1.size()>1){
				s2.push(s1.top());
			s1.pop();

			}
			s1.pop();

			while(!s2.empty()){
				s1.push(s2.top());
			s2.pop();

			}
			
			
		}
	}


	// front

	int front(){
		int x;
		if(!s1.empty() and s2.empty()){
			// shift s1 se s2 mai elemts
			while(s1.size()>1){
				s2.push(s1.top());
			s1.pop();

			}
		x=s1.top();

			

			while(!s2.empty()){
				s1.push(s2.top());
			s2.pop();

			}

			
			
			
		}
		return x;

	}


	// empty
	bool empty(){
		return s1.empty() and s2.empty();
	}


	// size
	int size(){
		return s1.size();
	}
};
int  main(){
	Queue q;
	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		q.push(i);
	}
    

	while(!q.empty()){
		cout<<q.front()<<" ";
	q.pop();


	

	}
	

	


	return 0;
	}
