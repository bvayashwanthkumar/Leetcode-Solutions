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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* curr,*prev,*end;

        if(head==nullptr || head->next==nullptr || k==0) return head;

        int n=0;
        curr=head;


        while(curr){
            n++;
            curr=curr->next;

        }
        k=k%n;
        if(k==0)return head;

        while(k>0){

        curr=head;
        prev=nullptr;

        while(curr->next!=nullptr){
            prev=curr;
            curr=curr->next;
        }
        prev->next=nullptr;
        curr->next=head;
        head=curr;

        k--;
        }
        
        return head;
    }
};