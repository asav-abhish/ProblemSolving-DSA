// https://leetcode.com/problems/merge-in-between-linked-lists/description/

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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode * temp = list1;
        ListNode * head = list1;
        while(--a){
            temp = temp->next;
        }
        while(b--){
            head=head->next;
        }
        temp->next = list2;
        while(list2->next){
            list2 = list2->next;
        }
        
        
        list2->next = head->next;

        return list1;
    }
};
