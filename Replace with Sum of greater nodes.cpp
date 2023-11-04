// https://hack.codingblocks.com/app/contests/4001/125/problem

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
node * buildbst(int arr[], int s,int e){
	if(s>e){
		return NULL;
	}
	int mid=(s+e)/2;
	node * root = new node (arr[mid]);
	root->left = buildbst(arr,s,mid-1);
	root->right = buildbst(arr,mid+1,e);

	return root;
}
 
void preorder(node*root,int &sum){
	if(root == NULL){
		return ;
	}
	preorder(root->right,sum);
	sum += root->data;
	root->data = sum;
	//cout << sum << " ";
	preorder(root->left,sum);
	
}
void inorder(node*root){
	if(root == NULL){
		return;
	}
	cout << root->data << " ";
	inorder(root->left);
	inorder(root->right);
}
void Levelorderprint(node*root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node*x=q.front();//NULL
        q.pop();
        if(x==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<x->data<<" ";//8
            if(x->left!=NULL){
                q.push(x->left);
            }
            if(x->right!=NULL){
                q.push(x->right);
            }
        }
	}
}
int main() {
	int n;
	cin>> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	node * root = buildbst(arr,0,n-1);
	int sum =0;
	preorder(root,sum);
	inorder(root);
	
	
	// Levelorderprint(newroot);
	 

	return 0;
}
