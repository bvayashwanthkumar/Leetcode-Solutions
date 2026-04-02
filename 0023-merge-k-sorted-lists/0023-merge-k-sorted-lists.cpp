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

    ListNode* merge(ListNode* l1, ListNode* l2){
        if(l2==nullptr)return l1;
        if(l1==nullptr)return l2;
        ListNode* head=nullptr,*new1,*new2;
        int val;
        while(l2 && l1){
            if(l1->val < l2->val){
                val=l1->val;
                l1=l1->next;

            }
            else{
                val=l2->val;
                l2=l2->next;
            }

            if(head==nullptr){
                head=new ListNode(val);
                new1=head;
            }
            else{
                new1->next=new ListNode(val);
                new1=new1->next;
            }

        }

        while(l1){
            new2=new ListNode(l1->val);
            new1->next=new2;
            new1=new2;
            l1=l1->next;
        }
        while(l2){
            new2=new ListNode(l2->val);
            new1->next=new2;
            new1=new2;
            l2=l2->next;
        }
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return nullptr;
        if(lists.size()==1)return lists[0];
       
         int n = lists.size();
        while(n > 1){
            int k = (n + 1) / 2;
            for(int i = 0; i < n/2; i++){
                lists[i] = merge(lists[i], lists[i + k]);
            }
            n = k;
        }
    return lists[0]
    
    }
};