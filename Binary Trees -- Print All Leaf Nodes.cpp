// https://hack.codingblocks.com/app/contests/4001/925/problem

#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;

	node(int d){
		data = d;
		left=NULL;
		right=NULL;
	}
};
node*buildlevelwise(){
	queue <node*> q;

	int data;
	cin >> data;
		node * root = new node(data);
		q.push(root);

	while(!q.empty()){
		node*x = q.front();
		q.pop();

		int lc,rc;
		cin >> lc >> rc;
		if(lc!= -1){
			x->left=new node(lc);
			q.push(x->left);
		}
		
		if(rc!= -1){
			x->right=new node(rc);
			q.push(x->right);
		}
	}
	return root;
}
void printleafnode(node * root){
	if(!root){
		return;
	}
	if(!root->left && !root->right){
		cout << root->data << " ";
		return;
	}
	if(root->left){
		printleafnode(root->left);
	}
	if(root->right){
		printleafnode(root->right);
	}
	
	
}
int main() {
	node*root = buildlevelwise();

	printleafnode(root);
	return 0;
}
