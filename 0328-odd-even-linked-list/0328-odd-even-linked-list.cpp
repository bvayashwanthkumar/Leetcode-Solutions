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
        if(!head)return head;
        ListNode* evenhead=nullptr,*curr=head,*even=nullptr,*prev=nullptr;
        int i=0;
        while(curr){
            i++;
            if(i%2==0){
                if(evenhead==nullptr){
                    evenhead=curr;
                    even=curr;
                }
                else{
                    even->next=curr;
                    even=curr;
                }

                prev->next=curr->next;
                curr=curr->next;
            }
            else{
            prev=curr;
            curr=curr->next;
            }

        }

        if(even){
            even->next=nullptr;
        }
        prev->next=evenhead;
        return head;
    }
};