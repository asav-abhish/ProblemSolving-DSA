// https://hack.codingblocks.com/app/contests/4001/385/problem

#include<iostream>
#include <unordered_map>
#include<map>
#include<list>
#include<queue>
using namespace std;
template <typename U>
class Graph{
    //unordered_map <U, list<U> > h;
    map <U, list<U> > h;

public:
    void addedge(U a, U b, bool direc = false ){
        h[a].push_back(b);
        if(direc){
            h[b].push_back(a);
        }
    }

    void sssp(U src, U des){
        queue <U> q;
        unordered_map <U, bool> track;
        unordered_map <U, int> distance;
        unordered_map < U, U > parent;
        q.push(src);
        track[src] = true;
        distance[src] = 0;
        parent[src] = src;

        while (!q.empty()) {
            U x = q.front();
            q.pop();
            //cout << x << " ";
            //ab uska hash map se directed connected neighbour layege
            for(auto nei : h[x]){
                if(!track[nei]){
                    q.push(nei);
                    track[nei] = true;
                    distance[nei] = distance[x] + 1;
                    parent[nei] = x;
                }
            }
        }
        cout << distance[des] << endl;
    }
};
int main(){

	int t;
	cin >> t;
	for(int i = 0; i < t; i++){

    	Graph<int> g;
		int n,l,s;
		cin >> n >> l >> s ;

   int board[n+6] = {0};
        for(int i = 1; i <= l; i++){
			int x,y;
			cin >> x >> y;
			int add = y - x;
			board[x] = add;
		}

		for(int i = 1; i <= s; i++){
			int x,y;
			cin >> x >> y;
			int sub = x-y;
			board[x] = -sub;
		}
   
   for(int sr=0;sr<n;sr++){
	   	 for(int dice=1;dice<=6;dice++){
	   	    int des=sr+dice+board[sr+dice];
	        g.addedge(sr,des);
         }
   }
    g.sssp(0,n);
}
}
