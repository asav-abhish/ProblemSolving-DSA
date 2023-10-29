// https://hack.codingblocks.com/app/contests/4001/499/problem

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

node *buildtree(){
	int data;
	cin>>data;
	node*root=new node(data);
	string left,right;
	cin>>left;
	if(left =="true"){
		root->left=buildtree();
	}
	cin >> right;
	if(right =="true"){
		root->right=buildtree();
	}
	return root;
}
int height(node*root){
	if(root==NULL){
		return 0;
	}

	return height(root->left) + height(root->right) + root->data;
}
int main() {

	node*root = buildtree();
	cout << height(root);
	return 0;
}
