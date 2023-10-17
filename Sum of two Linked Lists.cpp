// https://hack.codingblocks.com/app/contests/4001/243/problem

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
node *sumoftwolinkedlist(node*head1,node*head2){
	int carry = 0;

	node* anshead = NULL;
	node* anstail = NULL;

	while(head1 != NULL || head2 != NULL || carry != 0){

		int val1 = 0;
		if(head1 != NULL){
			val1 = head1->data;
		}

		int val2 = 0;
		if(head2 != NULL){
			val2 = head2->data;
		}

		//generic code hai agar ek ll khatam bhi ho gayi wo sum me 0 add karega
		int sum = carry + val1 + val2;

		int digit = sum%10;

		insertatend(anshead,anstail,digit);

		carry = sum / 10;

		if(head1!=NULL){
			head1=head1->next;
		}
		if(head2!=NULL){
			head2=head2->next;
		}
	}
	return anshead;
}
void printll(node*head){
	while(head!=NULL){
		cout << head->data <<" ";
		head = head->next;
	}
}

	
int main () {
	node*head1=NULL;   // starting mai dono null ko point karna chaiye
	node*tail1=NULL;
	node*head2=NULL;   // starting mai dono null ko point karna chaiye
	node*tail2=NULL;
	int n,m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		int data;
		cin >> data;
		insertatend(head1,tail1, data);
	}
	for(int i = 1; i <= m; i++){
		int data;
		cin >> data;
		insertatend(head2,tail2, data);
	}

	reversealinkedlist(head1);
	reversealinkedlist(head2);
	// adddatasofll(x,y);-
	node*answerhead=sumoftwolinkedlist(head1,head2);
	reversealinkedlist(answerhead);
	printll(answerhead);

	return 0;
}
