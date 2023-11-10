// https://hack.codingblocks.com/app/contests/4001/1069/problem

#include<iostream>
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
  
node* buildbst(int arr[],int s,int e){
	if(s>e){
		return NULL;
	}
	int mid=(s+e)/2;
	node*root=new node (arr[mid]);
	root->left=buildbst(arr,s,mid-1);
	root->right=buildbst(arr,mid+1,e);
	return root;
}
void inorder(node*root){
	if(root==NULL){
		return;
	}
	cout << root->data <<" ";
	if(root->left != NULL){
		inorder(root->left);
	}
	if(root->right != NULL){
		inorder(root->right);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		node*root = buildbst(arr,0,n-1);
    	inorder(root);
		cout << endl;
	}
    
 
}
