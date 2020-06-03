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
    ListNode* middleNode(ListNode* head) {
        ListNode* len=head;
        int l=0;
        while(len!=NULL){
            l++;
            len=len->next;
        }
        ListNode* ans=head;
        l=l/2;
        while(l--){
            // k=ans;
            ans=ans->next;
        }
        // k->next=NULL;
        return ans;
    }
};  