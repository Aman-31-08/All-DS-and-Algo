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
        ListNode *ptr1 = headA;
        ListNode *ptr2 = headB;
        
        while(ptr1 != ptr2){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            
            // break the loop if they reach the end together or collide
            if(ptr1 == ptr2) break;
            
            // if the pointer reaches the end of A, go to B and vice versa for ptr2
            if(ptr1 == NULL) ptr1 = headB;
            if(ptr2 == NULL) ptr2 = headA;
 
        }
        // return the collided pointer
        return ptr1;
    }
};