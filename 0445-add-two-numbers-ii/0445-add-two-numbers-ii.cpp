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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       
        stack<int> p1,p2;

        while(l1 || l2){
            if(l1){
                p1.push(l1->val);
                l1=l1->next;
            }
            if(l2){
                p2.push(l2->val);
                l2=l2->next;
            }
        }

        
       
        ListNode* head= nullptr;
      int carry=0;




        while(!p1.empty() || !p2.empty() || carry){
            int sum=carry;

            if(!p1.empty()){
                sum+=p1.top();
                p1.pop();
            }

            if(!p2.empty()){
                sum+=p2.top();
                p2.pop();
            }

            carry=sum/10;
            
            ListNode * node=new ListNode(sum%10);
            node->next=head;
            head=node;
        }
        return head;
    }
        
};