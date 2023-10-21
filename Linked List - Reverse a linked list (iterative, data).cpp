// https://hack.codingblocks.com/app/contests/4001/3/problem

#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node * next;

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
void reversealinkedlist(node*&head){
    node * current = head;
    node * pre = NULL;

    while(current != NULL){
        node * nt = current->next;
        current->next = pre;
        pre = current;
        current = nt;
    }
    head = pre;
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
	reversealinkedlist(head);
	printll(head);
	return 0;
}
