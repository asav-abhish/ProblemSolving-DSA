// https://hack.codingblocks.com/app/contests/4001/451/problem

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
node* deleteallleafnodes(node*root){

	if(root->left == NULL && root->right == NULL){
		delete root;
		root=NULL;
		return root;
	}
	else if(root->left != NULL && root->right != NULL){
		root->left = deleteallleafnodes(root->left);
		root->right = deleteallleafnodes(root->right);
	}
	else if(root->left != NULL && root->right == NULL){
		root->left = deleteallleafnodes(root->left);
	}
	else if(root->left == NULL && root->right != NULL){
		root->right = deleteallleafnodes(root->right);
	}
	
	return root;
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

	}}

void printtree(node*root){
	if(root == NULL){
        return;
    }
    if(root->left != NULL && root->right != NULL){
        cout << root->left->data << " => "<< root->data << " <= "<< root->right->data << endl;
        printtree(root->left);
        printtree(root->right);
    }

     if(root->left != NULL && root->right == NULL){
        cout << root->left->data << " => "<< root->data << " <= END"<< endl;
        printtree(root->left);
    }

     if(root->left == NULL && root->right != NULL){
        cout << "END => "<< root->data << " <= "<< root->right->data << endl;
        printtree(root->right);
    }
    if(root->left == NULL && root->right == NULL){
        cout<< "END => " << root->data << " <= END" << endl;
        return;
    }
}

int main() {
	node*root = buildtree();

	node *newroot = deleteallleafnodes(root);
	//Levelorderprint(newroot);
	printtree(newroot);
	return 0;
}
