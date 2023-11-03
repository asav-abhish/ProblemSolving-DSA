// https://hack.codingblocks.com/app/contests/4001/1257/problem

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

void rightview(node*root,int cl,int &mlptn){
	if(root==NULL){
		return;
	}
	if(mlptn < cl){
		cout << root->data <<" ";
		mlptn++;
	}
	rightview(root->right,cl+1,mlptn);
	rightview(root->left,cl+1,mlptn);
}
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
        //cout<<x->data<<endl;
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
int main(){
node *root =buildlevelwisetree();
int k=0;
rightview(root,1,k);
}
