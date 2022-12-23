/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA ;
        ListNode* b = headB;
        
        // A+B 跟 B+A 長度相同, 從(A+B)的頭開始找 等於 (B+A)的頭開始找即為解
        while( a != b ) {
            a = a == NULL ? headB : a->next;
            b = b == NULL ? headA : b->next;
        }

        return a;
    }
};
// @lc code=end

