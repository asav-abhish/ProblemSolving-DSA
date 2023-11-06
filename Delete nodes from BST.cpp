// https://hack.codingblocks.com/app/contests/4001/1067/problem

#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* left;
	node* right;

	node(int d){
		data = d;
		left= NULL;
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
node* deleteinbst(node*root,int key){
	//base case
	if(root==NULL){
		return NULL;
	}
	//case 1
	//lst but not rst
	if(key < root->data){
		root->left = deleteinbst(root->left,key);
		return root;
	}
	//case 2
	//rst but not bst
	else if(key > root->data){
		root->right = deleteinbst(root->right,key);
		return root;
	}
	else{
		//ab isme 4 case banege
		//if root ka left and right nhii h;
		if(root->left == NULL && root->right == NULL){
			delete root;
			root = NULL;
			return root;
		}
		else if (root->left != NULL && root->right == NULL){
			node * temp = root->left;
			delete root;
			root = NULL;
			return temp;
		}
		else if(root->left == NULL && root->right != NULL){
			node * temp = root->right;
			delete root;
			root = NULL;
			return temp;
		}
		else if(root->left != NULL && root->right != NULL){
			// node *temp = root->left;

			// while(temp->right != NULL){
			// 	temp=temp->right;
			// }
			// swap(root->data,temp->data);
			// root->left = deleteinbst(root->left,key);
			// return root;

			node *temp = root->right;

			while(temp->left != NULL){
				temp = temp->left;
			}
			swap(root->data,temp->data);
			root->right = deleteinbst(root->right,key);
			return root;
		}
	}
	return root;
}
int main(){
	int t;
	cin>> t;
	while(t--){
		int n;
		cin>> n;
		int arr1[n];
		for(int i=0; i<n; i++){
			cin>> arr1[i];
		}
		int m;
		cin>> m;
		int arr2[m];
		for(int i=0; i<m; i++){
			cin>> arr2[i];
		}
		node*root = buildbst(arr1,0,n);
		
		int z=0;
		while(z < m){
			
			root = deleteinbst(root,arr2[z++]);
		}
		preorder(root);
		cout << endl;
	}
}
