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
        ListNode* curr=head;
        int size=0;
        while(curr){
            curr=curr->next;
            size++;
        }
        if(size==n)return head->next;
        curr=head;
        ListNode* prev=nullptr;
        size=size-n;
        for(int i=0;i<size;i++){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        return head;
    }
};