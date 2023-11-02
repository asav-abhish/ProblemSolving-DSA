// https://hack.codingblocks.com/app/contests/4001/449/problem

#include <iostream>
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

node*buiidtreeusinginpre(int s, int e,int postarr[], int inoarr[], int &ending){
    if(ending < 0 ||s>e ){
        return NULL;
    }
    int data= postarr[ending--];

    int i;
    for( i = s; i <=e; i++){
        if(data == inoarr[i]){
            break;
        }
    }
    node*root = new node(data);
	 root->right= buiidtreeusinginpre(i+1,e,postarr,inoarr,ending);
    root->left = buiidtreeusinginpre(s,i-1,postarr,inoarr,ending);
   
    return root;
}

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
int main(){
	int n,m;
cin>>n;
int post[n];
for(int i=0; i<n; i++){
	cin>>post[i];
}
cin>>m;
int ino[m];
for(int i=0; i<m; i++){
	cin>>ino[i];
}
int ee = n-1;
node *root=buiidtreeusinginpre(0,n-1,post,ino,ee);

printtree(root);

//Levelorderprint(root);

}
