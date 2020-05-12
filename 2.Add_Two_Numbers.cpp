// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto d=new ListNode(0);
        auto a=l1,b=l2,curr=d;
        int carry=0;
        while(a!=0 || b!=0){
            int x=(a!=NULL)?a->val:0;
            int y=(b!=NULL)?b->val:0;
            int sum=carry+x+y;
            carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;
            if(a!=NULL)
                a=a->next;
            if(b!=NULL)
                b=b->next;
        }
        if(carry>0)
            curr->next=new ListNode(carry);
        return d->next;
    }
};