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
        if(list1==nullptr)return list2;
        if(list2==nullptr)return list1;
        int val;
        ListNode *head,*new1,*new2;
        head=nullptr;

        while(list1 && list2){
            if(list1->val < list2->val){
                val=list1->val;
                list1=list1->next;
            }
            else{
                val=list2->val;
                list2=list2->next;
            }
            if(head==nullptr){
                head=new ListNode(val);
                new1=head;
            }
            else{
                new2 = new ListNode(val);
                new1->next=new2;
                new1=new2;
            }
        }

        while(list1){
            new2=new ListNode(list1->val);
            new1->next=new2;
            new1=new2;
            list1=list1->next;
        }
        while(list2){
            new2=new ListNode(list2->val);
            new1->next=new2;
            new1=new2;
            list2=list2->next;
        }
        return head;
    }
};