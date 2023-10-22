// https://hack.codingblocks.com/app/contests/4001/69/problem

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
void printll(node*head){
	while(head != NULL){
		cout << head->data <<" ";
		head = head->next;
	}
}

node* oddevenpos(node*head){

	node * odd = NULL;
	node * even = NULL;
	node * temp1 = NULL;
	node * temp2 = NULL;

//joining ele
	while(head!= NULL){

		if((head->data) % 2 == 0){
			if(even==NULL){
				even = head;
				temp2 = even;
			}
			else{
				even->next = head;
				even=even->next;
			}
		}

		else{
			if(odd == NULL){
				odd = head;
				temp1 = odd;
			}
			else{
				odd->next = head;
				odd=odd->next;
			}
		}
		head = head->next;

	}
	if(even!= NULL){
		even->next =NULL;
	}
	
	odd->next = temp2;
	return temp1;
}
int main(){
	node*head = NULL;
	node*tail=NULL;
	long long int n; 
	cin >> n;
	while(n--){
		int d;
		cin >> d;
		insertatend(head,tail,d);
	}
	node* nhead = oddevenpos(head);
	printll(nhead);
}
