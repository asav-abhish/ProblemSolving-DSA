// https://hack.codingblocks.com/app/contests/4001/1683/problem

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
void insertatbegin(node* &head,node* &tail,int d){
    // subse phale yaha ek node banyega 
    
    //yaha pe 2 case banyega ek ll khali ho tab ka
    if(head == NULL){
        // node p(d);   // node ban rha y naam ka jisme value h 2 yani d;   //lekin ye static nhi banate hai
        node * p = new node(d); 
        head = p;
        tail = p;
    }
    else{
        node * p = new node(d); 
        p -> next = head;
        head = p; 
    }
}
node* oddevenpos(node*head){
	node * odd = head;
	node * even = head->next;
	node * evenstar = head->next;
	node * oddstart = head;
	while(odd ->next!= NULL && even->next != NULL){
		odd->next = even->next;
		odd = odd->next;
		even ->next = odd->next;
		even = even->next;
	}
	odd->next = evenstar;
	return oddstart;
}
int main(){
	node * head = NULL;
	node*tail=NULL;
	int n; 
	cin >> n;
	while(n--){
		int d;
		cin >> d;
		insertatend(head,tail,d);
	}
	node *h1 = NULL;
	node *h2 = NULL;
	
	cout << "Original List: ";
	printll(head);
	cout << endl;
	node* nhead = oddevenpos(head);
	cout<<"Modified List: ";
	printll(nhead);
}
