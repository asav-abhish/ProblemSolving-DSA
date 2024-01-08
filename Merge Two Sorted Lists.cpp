// https://leetcode.com/problems/merge-two-sorted-lists/submissions/1140769781/

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list2 == NULL)return list1;
        if(list1 == NULL)return list2;

        ListNode* head = new ListNode();
        if (list1->val < list2->val){
            head = list1;
            ListNode* p = mergeTwoLists( list1->next, list2);
            head->next = p;
            return head;
        }

        else{
            head = list2;
            ListNode* p = mergeTwoLists( list1, list2->next);
            head->next = p;
            return head;
        }
    }
};
