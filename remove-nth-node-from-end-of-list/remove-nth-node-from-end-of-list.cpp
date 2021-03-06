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
    ListNode* removeNthFromEnd(ListNode* A, int B) {
    ListNode* fast=A;
    ListNode* slow= A;
    ListNode* head=A;

    while(B--)
    {
        fast=fast->next;
        if(!fast)
        return A->next;
    }
    

    while(fast->next)
    {
        fast=fast->next;
        slow=slow->next;
    
    }
   slow->next=slow->next->next;
   return A;
        
    }
};