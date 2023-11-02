// https://hack.codingblocks.com/app/contests/4001/416/problem

#include<iostream>
#include<string>
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
node* buildtree(){
	int data;
	cin >> data;
	node*root = new node(data);
	string left,right;
	cin >> left;

	if(left == "true"){
		root->left = buildtree();
	}

	cin >> right;
	if(right == "true"){
		root->right = buildtree();
	}

	return root;
}

node* lca (node*root, int a,int b){
	if(root == NULL){
		return NULL;
	}
	if(root->data == a || root->data == b){
		return root;
	}
	node *leftans = lca(root->left, a, b);
	node *rightans = lca(root->right,a,b);

	if(leftans != NULL and rightans != NULL){
		return root;
	}
	else if(leftans == NULL and rightans != NULL){
		return rightans;
	}
	else if(leftans != NULL and rightans == NULL){
		return leftans;
	}
	return NULL;
}
int main() {
	node*root = buildtree();
	int ele1,ele2;
	cin >> ele1 >> ele2;
	cout << lca(root,ele1,ele2)->data << endl;
	return 0;
}
