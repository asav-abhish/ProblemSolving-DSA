// https://hack.codingblocks.com/app/contests/4001/235/problem

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
node* midfinder(node*head){
    node*slow = head;
    //node *fast = head;
   node *fast = slow -> next;
    while(fast != NULL and fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
    
}
/*
int length(node * head){
    int co = 0;
    while(head != NULL ){
        co++;
        head = head ->next;
    }
    return co;
}*/
void printll(node * head){
    while (head != NULL){
        cout << head -> data << " " ;
        head = head -> next;
    }
    cout <<  endl;
}
/*
void bubblesort(node*head, int length){
	for(int i = 0; i < length-1; i++){
        for(node * temp = head; temp->next != NULL; temp=temp -> next){    //sirf ye line ek change hua h

            if(temp->data > temp->next->data){
                swap (temp->data , temp->next->data);
            } 
        }
    }
}
*/
node* mergetwosortedll(node*&head1,node*&head2){
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}

	if(head1->data < head2->data){
		node*nhead = head1;
		node *p = mergetwosortedll(head1->next,head2);
		nhead->next = p;
		return nhead;
	}
	else{
		node*nhead = head2;
		node *p = mergetwosortedll(head1,head2->next);
		nhead->next = p;
		return nhead;
	}
}

node *mergesort(node*head){
    // if(head == NULL){
    //     return NULL;
    // }
    if(head->next==NULL){
		return head;

	}
    node*mid = midfinder (head);
    node *n = mid ->next;
    mid ->next = NULL;
    node*x=mergesort(head);//3 4 5
	node*y=mergesort(n);
    node*nnewhead = mergetwosortedll(x,y);
    return nnewhead;

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

	node * nh = mergesort(head);


	//node *newhead = mergetwosortedll(head1,head2);
	
	printll(nh);
	return 0;

}
