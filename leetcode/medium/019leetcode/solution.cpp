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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        ListNode* temp=head;
        int l = 0, i = 1;
	    while(temp){
            temp = temp-> next;
            l++;
        }
        if(l == n){
            return head -> next;  
        }
        for(temp = head; i<l-n; ++i){
            temp = temp -> next;

        }
        temp-> next = temp -> next -> next;
        
        return head;      
        
    }
};
