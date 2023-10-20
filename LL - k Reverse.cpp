// https://hack.codingblocks.com/app/contests/4001/1326/problem

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
void insertatend(node*&head,node*&tail, int d){
	if(head == NULL){
		node * n = new node(d);
		head = n;
		tail = n;
	}
	else{
		node * n = new node(d);
		tail -> next = n;
		tail = n;
	}
}
node* reverseusingrec(node * &head, node *&pre){
//
    if(head == NULL){
        return pre;
    }

    node * cur = head;
    node * n = cur -> next;
    cur -> next = pre;
    pre = cur;
    cur = n;
    return reverseusingrec( cur, pre);

}
node *kreverse(node*&head,node*&tail,int k){
	if(head == NULL){
		return NULL;
	}

	node*temp = head;
	for(int i = 1; i < k; i++){
		temp = temp->next;
	}
	node*n = temp->next;
	temp->next = NULL;
	node *newh = reverseusingrec(head,tail);
	node *bakikaans =kreverse(n,tail,k);

	node *u = newh;
	for(int i = 1; i < k; i++){
		u = u->next;
	}
	u->next=bakikaans;
	return newh;
}

void printll(node*head){

	while(head!=NULL){
		cout<<head->data<<" ";//7
		head=head->next;

	}
}

int main () {
	node*head=NULL;   // starting mai dono null ko point karna chaiye
	node*tail=NULL;
	
	int n,k;
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		int data;
		cin >> data;
		insertatend(head,tail, data);
	}
	node * ans = kreverse(head,tail,k);
	printll(ans);
	return 0;
}
