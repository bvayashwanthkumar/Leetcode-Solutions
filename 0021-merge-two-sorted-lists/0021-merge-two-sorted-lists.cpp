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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head,*curr1,*curr2,*new2,*new1=new ListNode();
        curr1=list1;
        curr2=list2;
       head=nullptr;

       if(list1==nullptr)return list2;
       if(list2==nullptr)return list1;

        while(curr1!=nullptr && curr2!=nullptr){
            int val;
            if(curr1->val <= curr2->val){
                val=curr1->val;
                curr1=curr1->next;
            }
            else{
                val=curr2->val;
                curr2=curr2->next;
            }

            if(head==nullptr){
                head=new ListNode(val);
                new1=head;
            }
            else{
            new2=new ListNode(val);
            new1->next=new2;
            new1=new2;
            }
        }
        
        while(curr1!=nullptr){
            new2=new ListNode(curr1->val);
            new1->next=new2;
            new1=new2;
            curr1=curr1->next;
         
        }

         while(curr2!=nullptr){
            new2=new ListNode(curr2->val);
            new1->next=new2;
            new1=new2;
            // if(curr2==nullptr){
            //     new1->next=nullptr;
            //     break;
            // }
            curr2=curr2->next;
            
        }

        return head;

        
    }
};