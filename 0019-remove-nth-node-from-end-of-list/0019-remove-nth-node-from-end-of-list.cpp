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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode*curr=head;
        while(curr){
            size++;
            curr=curr->next;
        }
        if(size==n)return head->next;
        int s1=size-n;
        curr=head;
       
       
        while(curr->next && s1-1>0){
          //  prev=curr;
            curr=curr->next;
            s1--;
        }
        curr->next=curr->next->next;
        return head;
    }
};