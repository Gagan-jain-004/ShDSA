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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;   // Points to the previous node (initially null)
        ListNode* curr = head;      // Current node we're processing
        
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;  // Save the next node
            
            curr->next = prev;      // Reverse the link: point current to previous
            
            prev = curr;            // Move prev forward
            curr = nextTemp;        // Move curr forward
        }
        
        return prev;  // prev becomes the new head
    }
};