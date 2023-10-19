// https://hack.codingblocks.com/app/contests/4001/247/problem

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
}

bool palindromicotnot(node*head,node*tail){
	//base case
	if (head == tail){
		return true;
	}

	//rec case
	if(head -> data == tail -> data){
		deleteattail(head,tail);
		deleteatfront(head,tail);
		return palindromicotnot(head,tail);
	}
	else{
		return false;
	}
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
if (palindromicotnot(head,tail) == true){
	cout <<"true";
}
else{
	cout <<"false";
}
	return 0;
}
