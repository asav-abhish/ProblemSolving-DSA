// https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1

class Solution
{
    public:
    struct node *reverseIt (struct node *head, int k)
    { 
        if(!head && k == 1){
            return head;
        }
        stack <int> s;
        node * pre = head;
        node * cur = head;
        
        while(pre != NULL){
            int count = k;
            while(cur != NULL && count > 0){
                s.push(cur->data);
                cur = cur->next;
                count--;
            }
            while(!s.empty()){
                pre->data = s.top();
                s.pop();
                pre = pre->next;
            }
        }
        return head;
    }
};
