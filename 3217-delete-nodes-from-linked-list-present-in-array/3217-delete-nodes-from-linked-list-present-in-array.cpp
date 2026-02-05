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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode dummy(0),*curr,*prev;;
        dummy.next=head;
        for(int i=0;i<nums.size();i++){
            int val=nums[i];
            prev=&dummy;
            curr=dummy.next;
            while(curr){
                if(curr->val==val){
                    prev->next=curr->next;
                }
                else{
                    prev=curr;
                }
                curr=curr->next;
            }
        }
        return dummy.next;
    }
};