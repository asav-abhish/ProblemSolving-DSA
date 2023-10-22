// https://hack.codingblocks.com/app/contests/4001/135/problem

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
void printll(node * head){
    while (head != NULL){
        cout << head -> data << " " ;
        head = head -> next;
    }
    cout <<  endl;
}
int main () {
	node*head=NULL;   // starting mai dono null ko point karna chaiye
	node*tail=NULL;
	
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int data;
		cin >> data;
		insertatend(head,tail, data);
	}
	node *x = NULL;
	node * add = reverseusingrec(head,x);
	printll(add);
	return 0;
}
