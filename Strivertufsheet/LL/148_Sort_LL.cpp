
// brute Force---------
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
    ListNode* sortList(ListNode* head) {
        
        if(!head || head->next == NULL) return head;
        vector<int>arr;
        ListNode*temp=head;
     
        while(temp && temp->next !=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
    
        arr.push_back(temp->val);
        temp=head;

         sort(arr.begin(),arr.end());
        for(auto i:arr){
            temp->val=i;
           if(temp->next) temp=temp->next;
        }

        return head;

    }
};