class Solution {
public:
    // void reverse(ListNode* head){
    //     ListNode* curr=head;
    //     ListNode* prev=NULL, *next=NULL;
    //     while(curr->next!=NULL){
    //         next=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=next;
    //     }
    //     head=curr;
    // }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head=new ListNode(0),*p=head;
        priority_queue<int> q;
        for(int i=0;i<lists.size();i++){
            while(lists[i]!=NULL){
                q.push(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        while(!q.empty()){
            int v=q.top();
            p->next=new ListNode(v);
            q.pop();
            p=p->next;
        }
        ListNode* curr=head->next;
        ListNode* prev=NULL, *n=NULL;
        while(curr!=NULL){
            n=curr->next; 
            curr->next=prev;
            prev=curr;
            curr=n;
        }
        head=prev;
        return head;
    }
};