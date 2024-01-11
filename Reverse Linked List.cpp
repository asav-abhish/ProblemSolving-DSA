// https://leetcode.com/problems/reverse-linked-list/submissions/1143127754/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * pre = NULL;
        ListNode * cur = head;
        

        while(cur){
            ListNode * nt = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nt;
        }
        return pre;
    }
};
