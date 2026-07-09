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
    ListNode* partition(ListNode* head, int x) {
        ListNode* curr=head;
        ListNode* greater=nullptr,*head1=nullptr,*prev=nullptr;
        if(!head)return head;

        while(curr){
            if(curr->val>=x){
                if(head1==nullptr){
                    head1=curr;
                    greater=curr;
                }
                else{
                    greater->next=curr;
                    greater=curr;
                }
                if(prev){
                prev->next=curr->next;
                curr=curr->next;
                }
                else{
                    head=curr->next;
                    curr=head;
                }
            }
            else{
            prev=curr;
            curr=curr->next;
            }
        }
        if(head1){
            greater->next=nullptr;
        }
        if(prev)prev->next=head1;
        else return head1;
        return head;
    }
};