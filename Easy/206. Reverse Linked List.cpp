/*Reverse a singly linked list.

Example:

Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
*/
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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        
        ListNode* previous = NULL;
        ListNode* current = head;
        ListNode* preceding = head->next;
        
        while(preceding != NULL)
        {
            current->next = previous;
            previous = current;
            current = preceding;
            preceding = preceding->next;
        }
        
        current->next = previous;
        head = current;
        return head;
    }
};
