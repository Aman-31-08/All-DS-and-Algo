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
typedef ListNode Node;
class Solution {
public:
    
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
        //first=reverse(first);
        //second=reverse(second);
        int s=0,c=0;
        Node *temp;
        Node *res=NULL;
        Node *curr=NULL;
        while(first!=NULL||second!=NULL)
        {
            s=c+(first?first->val:0)+(second?second->val:0);
            c=(s>=10)?1:0;
            s=s%10;
            temp=new ListNode(s);
            if(res==NULL) res=temp;
            else curr->next=temp;
            curr=temp;
            if(first) first=first->next;
            if(second) second=second->next;
        }
        if(c>0)
        {
            temp=new ListNode(c);
            curr->next=temp;
            curr=temp;
        }
        //res=reverse(res);
        return res;
    
    }
};