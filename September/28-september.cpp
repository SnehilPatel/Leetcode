// Question - https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
        if(!head)
            return NULL;
        
        int count = 0;
        ListNode* temp = head;
        
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        
        int ans;
        ans = count-n;
        ListNode* dummy = new ListNode(-1);      
        dummy->next = head;
        temp = dummy;
        while(ans > 0)
        {
            ans--;
            temp = temp ->next;
        }
        
        ListNode* node=NULL;
        
        node=temp->next;
        temp->next=temp->next->next;
        delete(node);
        
        return dummy->next;
    }
};

// Submission - https://leetcode.com/submissions/detail/810273817/