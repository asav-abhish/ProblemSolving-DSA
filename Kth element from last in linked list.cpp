// https://hack.codingblocks.com/app/contests/4001/171/problem

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
        cout << head -> data << " " ;
        head = head -> next;
    }
    cout <<  endl;
}
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

int main () {
	node*head=NULL;   // starting mai dono null ko point karna chaiye
	node*tail=NULL;
	

	for(int i = 1; i <= 100000; i++){
		int data;
		cin >> data;
		
		if(data == -1){
			break;
		}
		insertatend(head,tail, data);
	}
	int k ; cin >> k;
	node * temp = head;

	for(int jump = 0; jump < k; jump++){
		temp = temp ->next;
	}
	while (temp != NULL){
		
		temp = temp ->next;
		head = head->next;
	}
	cout << head->data;
	//printll(head);
	return 0;
}
