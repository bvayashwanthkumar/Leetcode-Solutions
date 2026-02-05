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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode* prev=nullptr,*next,*curr,*head1=head->next;
        curr=head;
        
        while(curr && curr->next){

            next=curr->next;
            curr->next=next->next;
            next->next=curr;
            
            if(prev)prev->next=next;
            prev=curr;

            curr=curr->next;
        }
        return head1;
    }
};