/* 160. Intersection of Two Linked Lists */

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
        ListNode *x = headA;
        ListNode *y = headB;
        
        if(x ==NULL || y== NULL){
            return NULL;
        }

        while(x != NULL && y != NULL && x != y){
            x = x->next;
            y = y->next;
            if(x == y){
                return x;
            }
            if(x == NULL){
                x = headB;
            }
            if(y == NULL){
                y = headA;
            }
        }
            
        return x;
    }
};
