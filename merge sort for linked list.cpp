// https://hack.codingblocks.com/app/contests/4001/2107/problem


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
