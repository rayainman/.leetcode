/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
 */

// @lc code=start
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
        ListNode* current = head;
        while ( current && current->next )
        {
            ListNode* nextNode = current->next;
            if( current->val == nextNode->val ) {
                current->next = nextNode->next;
                delete nextNode;
            } else {
                current = nextNode;
            }
        }
        
        return head;
    }
};
// @lc code=end

