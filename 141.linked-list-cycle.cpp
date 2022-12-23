/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
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
    bool hasCycle(ListNode *head) {
        ListNode* slower = head;
        ListNode* faster = head;

        while( slower->next && faster->next->next ) {
            slower = slower->next;
            faster = faster->next->next;
            if ( slower == faster) return true;
        }
        
        return false;
    }
};
// @lc code=end

