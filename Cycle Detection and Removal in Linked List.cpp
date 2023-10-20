// https://hack.codingblocks.com/app/contests/4001/1307/problem

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

// head - Head pointer of the Linked List
// Return a boolean value indicating the presence of cycle
// If the cycle is present, modify the linked list to remove the cycle as well
bool floydCycleRemoval(Node *&head)
{
    /* Code here */
    Node*p1=head;
    Node*p2=head;
    bool kyacyclehai = false;
    while(p2!=NULL and p2->next != NULL){
        p1 = p1->next;
        p2 = p2->next->next;
        if(p1==p2){
            kyacyclehai  = true;
            break;
        }
    }
    if(kyacyclehai  == true){
        p1 = head;
        while (p1->next != p2->next){
            p1 = p1->next;
            p2= p2->next;
        }
        p2 ->next = NULL; 
        return true;
    }
    else{
        return false;
    }
   /* if(kyacyclehai  == true){
        //p1 ya p2 kisi ek ko wapas leke chalo head pe
        p1 = head;
        // now they  will meet 1X ke speed se chalao
        // jaha pe ye dono meet karege wahi cycle h p2 ko break karna h
       // tou break karlo-->floyd cycle detecttion-->to break cycle
        while (p1->next != p2->next){
            p1 = p1->next;
            p2= p2->next;
        }
        p2 ->next = NULL; 
        return true;
    }
    return false;
    */
}

/*
*
*
*   You do not need to refer or modify any code below this. 
*   Only modify the above function definition.
*	Any modications to code below could lead to a 'Wrong Answer' verdict despite above code being correct.
*	You do not even need to read or know about the code below.
*
*
*
*/

void buildCycleList(Node *&head)
{
    unordered_map<int, Node *> hash;
    int x;
    cin >> x;
    if (x == -1)
    {
        head = NULL;
        return;
    }
    head = new Node(x);
    hash[x] = head;
    Node *current = head;
    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        if (hash.find(x) != hash.end())
        {
            current->next = hash[x];
            return;
        }
        Node *n = new Node(x);
        current->next = n;
        current = n;
        hash[x] = n;
    }
    current->next = NULL;
}

void printLinkedList(Node *head)
{
    unordered_set<int> s;
    while (head != NULL)
    {
        if (s.find(head->data) != s.end())
        {
            cout << "\nCycle detected at " << head->data;
            return;
        }
        cout << head->data << " ";
        s.insert(head->data);
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;

    buildCycleList(head);

    bool cyclePresent = floydCycleRemoval(head);
    if (cyclePresent)
    {
        cout << "Cycle was present\n";
    }
    else
    {
        cout << "No cycle\n";
    }

    cout << "Linked List - ";
    printLinkedList(head);

    return 0;
}
