// https://hack.codingblocks.com/app/contests/4001/421/problem

#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*left;
	node*right;

	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

node * insertinbst(node*root ,int d){
	if(root==NULL){
		root = new node (d);
		return root;
	}
	
	else if(d <= root->data){
		root->left = insertinbst(root->left,d);
		return root;
	}
	else{
		root->right = insertinbst(root->right,d);
		return root;
	}
}
node* buildbst(int arr1[],int i,int n){
	node * root=NULL;
	while(i<n){
		root = insertinbst(root,arr1[i++]);
	}
	return root;
}
void preorder(node*root){
	if(root==NULL){
		return;
	}
	cout << root->data <<" ";
	preorder(root->left);
	preorder(root->right);
	
}
node* lca(node*root, int i, int j){
	if(root == NULL){
		return NULL;
	}
	//node * x = lca(root->left, i , j);
	//node * y = lca(root->right, i , j);
	if(i <= root->data && j <= root->data){
		return lca(root->left,i,j);
	}
	else if(i > root->data && j > root->data){
		return lca(root->right,i,j);
	}
	else{
		return root;
	}
	return NULL;
}
int main() {
	
		int n;
		cin>> n;
			int arr[n];
			for(int i=0; i<n; i++){
				cin >> arr[i];
			}
		
		node*root = buildbst(arr,0,n);
	
	int i,j;
	cin >> i >> j;
	cout << lca(root,i,j) ->data << endl;
	return 0;
}
