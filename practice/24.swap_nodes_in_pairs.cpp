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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* d=new ListNode(0);
        d->next=head;
        ListNode* curr=d;
        ListNode* s=head;
        while(s!=NULL && s->next!=NULL){
            // ListNode *temp=s->next;
            curr->next=s->next;;
            s->next=s->next->next;
            curr->next->next=s;
            curr=s;
            s=s->next;
        }
        return d->next;
    }
};