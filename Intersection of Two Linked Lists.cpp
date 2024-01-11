// https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/1143077346/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1=headA;
        ListNode *temp2=headB;
        int length1=0;
        int length2=0;
            while(temp1!=NULL){
                length1++;
            temp1= temp1->next;
            }
            while(temp2!=NULL){
                length2++;
                temp2=temp2->next;
            }
        temp1 = headA;
        temp2 = headB;

        if(length1>=length2){
        for(int i=1;i<=length1-length2;i++)
        {
            temp1=temp1->next;
        }

        while(temp1!=temp2)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return  temp1 ;
    }

    else{

        for(int i=1;i<=length2-length1;i++)
        {
            temp2=temp2->next;
        }

        while(temp2!=temp1)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;

    }
    }
};
