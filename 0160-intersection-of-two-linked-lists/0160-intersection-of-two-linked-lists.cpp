/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* curr1,*curr2;
    curr1=headA;
    curr2=headB;
    int n1=0,n2=0;
    while(curr1){
        n1++;
        curr1=curr1->next;
    }
    while(curr2){
        n2++;
        curr2=curr2->next;
    }

    int sub=abs(n1-n2);
    curr1=headA;
    curr2=headB;

    if(n1<n2){
        while(curr2 && sub>0){
        curr2=curr2->next;
        sub--;
        }
    }
    else{
    while(curr1 && sub>0){
        curr1=curr1->next;
        sub--;
    }
    }

    while(curr2 && curr1){
        if(curr2==curr1){
            return curr1 ;
        }
        curr2=curr2->next;
        curr1=curr1->next;
    }
    return nullptr;
    }
};