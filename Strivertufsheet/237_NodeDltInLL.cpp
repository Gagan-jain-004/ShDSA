// Delete Node in a Linked List - Solution
// Problem Analysis
// This is a tricky problem because we're only given the node to delete, not the head of the list. We can't access the previous node, which is normally needed for deletion.
// Key Insight
// Since we can't delete the node in the traditional way (by updating the previous node's pointer), we can:

// Copy the next node's value into the current node
// Delete the next node instead

// This effectively "deletes" the current node from the user's perspective!


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
    void deleteNode(ListNode* node) {
        // Copy the value from the next node
        node->val = node->next->val;
        
        // Store the next node to delete it
        ListNode* temp = node->next;
        
        // Skip over the next node
        node->next = node->next->next;
        
        // Optional: Free memory (good practice in C++)
        delete temp;
    }
};