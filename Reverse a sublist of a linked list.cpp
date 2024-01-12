// https://www.geeksforgeeks.org/problems/reverse-a-sublist-of-a-linked-list/1

class Solution
{
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code her
        int x = 1;
        Node* temp1 = head;
        Node* temp2  = head;
        while(temp1 != NULL && x < m){
           temp1 = temp1->next;
           temp2 = temp2->next;
           x++;
        }
        vector<int> res;
        
        for(int i = m ; i <= n; i++){
            res.push_back(temp1->data);
            temp1 = temp1->next;
        }
        x = n-m;
        for(int i = 0 ; i <= x; i++){
            temp2->data = res[x-i];
            temp2 = temp2->next;
        }
        
        return head;
    }
};
