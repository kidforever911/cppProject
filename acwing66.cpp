/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *findFirstCommonNode(ListNode *headA, ListNode *headB) {
        ListNode *curA = headA;
        ListNode *curB = headB;
        while(curA != curB) {
            if(curA) curA = curA->next;
            else curA = headB;
            
            if(curB) curB = curB->next;
            else curB = headA;
        } 
        return curA;
    }
};