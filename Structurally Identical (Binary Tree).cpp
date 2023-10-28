// https://hack.codingblocks.com/app/contests/4001/74/problem

#include<iostream>
#include<string>
using namespace std;
class node{
	public:
	node* left;
	node* right;
	int data;
	node(int d){
		left=NULL;
		right=NULL;
		data=d;
	}
};
node* buildtree(){
	  int data;
	  cin>>data;
	  node* root=new node(data);
	  string left,right;
	  cin>>left;
	  if(left=="true"){
		  root->left=buildtree();
	  }
	  cin>>right;
	  if(right=="true"){
		  root->right=buildtree();
	  }
	  return root;
  }
  bool comparison(node* root1,node* root2){
	  //base case
	  if(root1==NULL && root2==NULL){
		  return true;
	  }
	  if(root1==NULL && root2!=NULL){
		  return false;
	  }
	  if(root1!=NULL && root2==NULL){
		  return false;
	  }
	  if(root1!=NULL && root2!=NULL){
		  bool left=comparison(root1->left,root2->left);
		  bool right=comparison(root1->right,root2->right);
	      bool x=left && right;
		  return x;
	    
	  }
	  return false;


  }
int main() {
	node* root1=buildtree();
	node* root2=buildtree();
	if(comparison(root1,root2)==true){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}

	return 0;
}
