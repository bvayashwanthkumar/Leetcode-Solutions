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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* even,*odd,*curr;
       
       if(!head || !head->next || !head->next->next)return head;


        odd=head;
        even=head->next;
        curr=even;
        while(even && even->next){
            odd->next=odd->next->next;
            even->next=even->next->next;
            even=even->next;
            odd=odd->next;
        }
        odd->next=curr;
        return head;
    }
};