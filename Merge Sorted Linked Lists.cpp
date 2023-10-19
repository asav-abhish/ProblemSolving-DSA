// https://hack.codingblocks.com/app/contests/4001/1090/problem

#include<iostream>
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
void insertatend(node*&head,node*&tail,int data){
    if(head==NULL){
        node*t=new node(data);
        head=t;
        tail=t;
    }
    else if(head->next==NULL){
        node*t=new node(data);
        head->next=t;
        tail=t;
    }
    else{
        node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        node*t=new node(data);
        temp->next=t;
        tail=t;
    }
}

node* mergetwosorted(node*&head1,node*&head2){
    
    //base case
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    //recursive case
	//node*newhead=NULL;
    if(head1->data < head2->data){
        node*newhead=head1;
        newhead->next=mergetwosorted(head1->next,head2);
        return newhead;
    }
    else{
        node*newhead=head2;
        newhead->next=mergetwosorted(head1,head2->next);
        return newhead;
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
    node*head1=NULL;
    node*tail1=NULL;
    node*head2=NULL;
    node*tail2=NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int size1;cin>>size1;
        for(int j=0;j<size1;j++){ 
            int d;cin>>d;
            insertatend(head1,tail1,d);
        }
        int size2;cin>>size2;
        for(int j=0;j<size2;j++){ 
            int d;cin>>d;
            insertatend(head2,tail2,d);
        }

    }
    node* nhead=mergetwosorted(head1,head2);
    printll(nhead);
    return 0;
}
