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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
            return NULL;
        ListNode* f=head;
        ListNode* g=head;
        for(int i=0;i<n;i++)
            f=f->next;
        if(f==NULL){
            head=head->next;
            return head;
        }
        while(f->next!=NULL){
            f=f->next;
            g=g->next;
        }
        g->next=g->next->next;
        return head;
    }
};