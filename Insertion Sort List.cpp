// https://leetcode.com/problems/insertion-sort-list/submissions/1145158228/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode * faltu = new ListNode(-1);
        faltu->next = head;
        ListNode * cur = head->next;
        ListNode * pre = head;
        
        while(cur != NULL){
            if(cur->val > pre->val){
                cur = cur->next;
                pre = pre->next;
                continue;
            }
            
            ListNode * temp = faltu;
            while(temp->next->val < cur->val){
                temp = temp->next;
            }
            pre->next = cur->next;
            cur->next = temp->next;
            temp->next = cur;
            cur = pre->next;
        }
        return faltu->next;
    }
};
