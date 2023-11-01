// https://hack.codingblocks.com/app/contests/4001/80/problem

#include<iostream>
#include<string>
#include<queue>
using namespace std;
class node{
	public:
	int data;
	node*left;
	node*right;

	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};
node* buildtree(){
	
	int data;
	cin>>data;
	node*root = new node (data);
	string lc,rc;
	cin >> lc;
	if(lc=="true"){
		root->left = buildtree();
	}
	cin>>rc;
		if(rc=="true"){
		root->right = buildtree();
	}
	return root;
}
void levelorderprint(node*root){
	queue<node*> q;
	vector<int> ans;
	if(root==NULL){
		return;
	}
	bool lefttoright = true;
	q.push(root);

	while(!q.empty()){
		int size = q.size();
		vector<int> v(size);

		for(int i=0; i<size; i++){
			node*x = q.front();
			q.pop();

			int index = lefttoright ? i : size - 1 - i;
			v[index] = x->data;

			if(x->left){
				q.push(x->left);
			}
			if(x->right){
				q.push(x->right);
			}
		}
		lefttoright = !lefttoright;
		// for(auto i: v){
		// 	ans.push_back(i);
		// }
		for(int i=0; i<v.size(); i++){
			ans.push_back(v[i]);
		}
	}
	for(int i=0; i<ans.size(); i++){
		cout<< ans[i] << " ";
	}

}
int main(){
	node* root =buildtree();

	levelorderprint(root);
}
