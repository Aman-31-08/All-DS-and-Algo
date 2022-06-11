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
    ListNode* deleteDuplicates(ListNode* head) {
        struct ListNode *p,*temp;
        p=head;
    while(p!=NULL&&p->next!=NULL)
    {
        temp=p;
        while(temp->next!=NULL)
        {
            if(p->val==temp->next->val)
            {
                temp->next=temp->next->next;
            }
            else
            {
                temp=temp->next;
            }
        }
        p=p->next;
    }
      return head;  
    }
    
};