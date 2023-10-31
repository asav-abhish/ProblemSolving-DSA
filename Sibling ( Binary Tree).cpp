// https://hack.codingblocks.com/app/contests/4001/918/problem

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
void printallnodesdonothavesiblings(node*root){
	if(!root){
		return;
	}
	if(root->left != NULL && root->right != NULL){
		printallnodesdonothavesiblings(root->left);
		printallnodesdonothavesiblings(root->right);
	}
	else if(root->left != NULL && root->right == NULL){
		cout <<  root->left->data << " ";
		printallnodesdonothavesiblings(root->left);
	}
	else if(root->left == NULL && root->right != NULL){
		cout <<  root->right->data << " ";
		printallnodesdonothavesiblings(root->right);
	}
}
int main() {
	node*root = buildtree();

	printallnodesdonothavesiblings(root);
	return 0;
}
