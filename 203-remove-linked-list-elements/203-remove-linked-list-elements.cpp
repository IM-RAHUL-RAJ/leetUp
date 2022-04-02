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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p=head;
        ListNode *q=head;
        if(head==NULL){
            return NULL;
        }
        if(head->val==val){
            while(head->val==val){
                
               p=p->next;
               q=q->next;
               head=p; 
                if(head==NULL){
                    return NULL;
                }
            }
            
        }
        q=q->next;
        while(q!=NULL){
            
            if(q->val==val){
                q=q->next;
                p->next=q;
            }
            else{
                p=p->next;
                q=q->next;
            }
        }
        return head;
    }
};