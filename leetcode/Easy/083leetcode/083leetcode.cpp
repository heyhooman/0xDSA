/* 83. Remove Duplicates from Sorted List

Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
 */

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
      ListNode* temp = head;
        while (temp && temp->next){
            ListNode* nextnode = temp->next;
            if (temp->val == nextnode->val){
                temp->next = nextnode->next;
            }
            else{
                temp = nextnode;
            }
        }
        return head;
    }
};
