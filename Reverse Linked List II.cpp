// https://leetcode.com/problems/reverse-linked-list-ii/submissions/1144179920/

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode * temp1 = head;
        ListNode * temp2 = head;
        int x = 1;
        while(x < left){
            temp1 = temp1->next;
            temp2 = temp2->next;
            x++;
        }
        vector<int> v;

        for(int i = left; i<=right; i++){
            v.push_back(temp1->val);
            temp1 = temp1->next;
        }
        x = right-left;
        for(int i = 0; i<=x; i++){
            temp2->val = v[x-i];
            temp2 = temp2->next;
        }
        return head;


    }
};
