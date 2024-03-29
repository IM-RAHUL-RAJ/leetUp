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
        ListNode *l1=headA;
        ListNode *l2=headB;
        if(l1==NULL || l2==NULL){
            return nullptr;
        }
        while(l1!=NULL && l2!=NULL){
            
            if(l1==l2){return l1;}
            l1=l1->next;
            // if(l1==NULL){l1=headB;}
            l2=l2->next;
            // if(l2==NULL){l2=headA;}
            if(l1==NULL && l2==NULL){return NULL;}
            else if(l1==NULL && l2!=NULL){
                l1=headB;
            }
            else if(l2==NULL && l1!=NULL){l2=headA;}
        }
        return nullptr;
        
    }
};