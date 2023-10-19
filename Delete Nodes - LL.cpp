// https://hack.codingblocks.com/app/contests/4001/273/problem

#include<iostream>
#include<stack>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int d){
        data=d;
        next=NULL;
    }
};
void insertattail(node*&head,node*&tail,int data){
    if(head==NULL){
        node*x=new node(data);
        head=x;
        tail=x;
    }
    else{
        node*x=new node(data);
        node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=x;
        tail=x;
    }
}
void reverseusingiter(node*&head,node*&tail){
    node*prev=NULL;
    node*curr=head;
    while(curr!=NULL){
        node*ne=curr->next;
        curr->next=prev;
        prev=curr;
        curr=ne;
    }
    head=prev;
}
void deletenode(node*&head,node*&tail){
    node* m=head;
    
    node*temp=head->next;
    while(temp!=NULL){
        if(temp->data > m->data){
            m=temp;
            temp=temp->next;
        }
        else{
            m->next=temp->next;
            delete temp;
            temp=m->next;
        }
    }
  
}
void printll(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    node*head=NULL;
    node*tail=NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int d;cin>>d;
        insertattail(head,tail,d);
    }
    reverseusingiter(head,tail);
    deletenode(head,tail);
    reverseusingiter(head,tail);
    printll(head);
    return 0;
}
