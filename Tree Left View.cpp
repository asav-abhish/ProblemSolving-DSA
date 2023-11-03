// https://hack.codingblocks.com/app/contests/4001/1256/problem

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

node* buildlevelwisetree(){
	queue<node*> q;

	int d;
	cin>>d;//8
	node*root=new node(d);
	q.push(root);

	while(!q.empty()){
		node*x=q.front();//100
        q.pop();
        int lc,rc;
        cin>>lc>>rc;//1 6
        if(lc!=-1){
            x->left=new node(lc);
            q.push(x->left);

        }
        if(rc!=-1){
            x->right=new node(rc);
            q.push(x->right);
        }
	}
	return root;
}
void leftview(node*root,int cl,int &mlptn){
	if(root==NULL){
		return;
	}
	if(mlptn < cl){
		cout<< root->data << " ";
		mlptn++;
	}
	leftview(root->left, cl+1, mlptn);
	leftview(root->right, cl+1, mlptn);
}

int main(){
node *root =buildlevelwisetree();
int k=0;
leftview(root,1,k);

}
