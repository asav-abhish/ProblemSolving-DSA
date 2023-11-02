// https://hack.codingblocks.com/app/contests/4001/430/problem


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
void printlevelwise(node*root){
	queue<node*> q;
	cout << root->data<<endl;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node*x = q.front();
		if(x == NULL){
			q.pop();
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			q.pop();
			if(x->left != NULL){
				cout << x->left->data << " ";
				q.push(x->left);
			}
			if(x->right != NULL){
				cout << x->right->data << " ";
				q.push(x->right);
			}
		}
	}
}
int main(){
	node*root = buildtree();
	printlevelwise(root);
}
