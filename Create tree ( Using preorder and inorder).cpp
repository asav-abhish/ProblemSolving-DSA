// https://hack.codingblocks.com/app/contests/4001/79/problem

#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int data;
    node* left;
    node*right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
node*createtree(int*pre,int*ino,int s,int e,int &p){
    if(s>e){
        return NULL;
    }
    
    int index;

    for(int i=s;i<=e;i++){
        if(pre[p]==ino[i]){
            index=i;
            break;
        }
    }
    node*root=new node(pre[p]);
    p=p+1;
    root->left=createtree(pre,ino,s,index-1,p);
    root->right=createtree(pre,ino,index+1,e,p);
    return root;
}
void preorder(node*root){
    //bc
    if(root==NULL){
        return;
    }

    //rc
    if(root->left==NULL){
        cout<<"END => ";
    }
    else{
        cout<<root->left->data<<" => ";
    }
    cout<<root->data<<" ";
    if(root->right==NULL){
        cout<<"<= END";
    }
    else{
        cout<<"<= "<<root->right->data;
    }
    cout<<endl;
    preorder(root->left);
    preorder(root->right);

}

int main(){
    int n;cin>>n;
    int pre[n];
    for(int i=0;i<n;i++){
        cin>>pre[i];
    }
    int m;cin>>m;
    int ino[m];
    for(int j=0;j<m;j++){
        cin>>ino[j];
    }
    int size=sizeof(pre)/sizeof(int);
    int x = 0;
    node*root=createtree(pre,ino,0,size-1,x);
    //levelwiseprint(root);
    preorder(root);
    return 0;
}
