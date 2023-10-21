// https://hack.codingblocks.com/app/contests/4001/7/problem

#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node * next = NULL;

	node (int d){
		data = d;
		next = NULL;
	}
};
void printll(node * head){
    while (head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
}
int lengthusingrec(node * head){
    if (head == NULL){
        return 0;
    }

//rec case
    return 1 + lengthusingrec(head -> next);

}
void insertattail(node* &head,node* &tail,int d){
    if(head == NULL){
        node * p = new node (d);
        head = p;
        tail = p;
    }

    else{
        node * p = new node (d);
        tail -> next = p;
        tail = p;
    }
}
void deleteatfront(node* &head,node* &tail){
    if(head == NULL){
        return;
    }
    else if(head -> next == NULL){
        delete head;
        head = NULL;
        tail = NULL;
    }
    else{
        node * temp = head -> next;
        delete head;
        head = temp;
    }
    printll(head);
    cout <<endl;
}

void deleteattail(node * &head, node * &tail){
    if(head == NULL){
        return;
    }
    else if(head -> next == NULL){
        delete head;
        head = NULL;
        tail = NULL;
    }
    else{
        node * temp = head;

        while(temp->next !=  tail){
            temp = temp -> next;
        }
        delete tail;
        tail = temp;
        tail -> next = NULL;
    }
    printll(head);
    cout <<endl;
}

void deleteatanypos(node * &head, node * &tail, int pos){
    if(pos == 0){
        deleteatfront(head,tail);
    }
    else if(pos >= lengthusingrec(head)){
        deleteattail(head,tail);
    } 
    else{
        node * temp = head;
        for(int jump = 1; jump < pos; jump++){
            temp = temp -> next;
        }
        node * t = temp -> next;
        //temp -> next = t -> next;
        temp -> next = ( temp ->next ) -> next;
        delete t;
        t = NULL;
        printll(head);
        cout <<endl;
    }
}

int main(){
    node*head=NULL;
    node*tail=NULL;
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        insertattail(head,tail,data);
    }
    //printll(head);
    for(int j=0;j<m;j++){
        int pos;
        cin>>pos;
        deleteatanypos(head,tail,pos);
        
    }
}


