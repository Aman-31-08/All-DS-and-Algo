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
    ListNode* reverse(ListNode *temp)
    {
        ListNode* p=temp;
        ListNode *q=NULL;
        ListNode *r=NULL;
        while(p!=NULL)
        {
            q=p->next;
            p->next=r;
            r=p;
            p=q;
        }
        return r;
    }
    int getDecimalValue(ListNode* head) {
        int sum=0,j=0;
        ListNode* temp=head;
        // if(temp->next!=NULL)
        // {
            temp=reverse(temp);
        // }
        while(temp!=NULL)
        {
            int i=temp->val;
            // cout<<i<<" ";
            sum+=i*pow(2,j++);
            temp=temp->next;
        }
        cout<<endl;
        return sum;
    }
};