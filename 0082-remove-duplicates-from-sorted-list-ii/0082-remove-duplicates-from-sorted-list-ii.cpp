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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr,*prev, *next;
        curr=head;
        ListNode dummy(0);
        dummy.next=head;
        prev=&dummy;
        bool flag;

        while(curr){
            flag=0;
            while(curr->next && curr->val==curr->next->val){
                curr=curr->next;
                flag=1;
            }
            
            if(flag){
                prev->next=curr->next;;
            }
            else{
                prev=curr;
            }
            curr=curr->next;
        }
        return dummy.next;
    }
};