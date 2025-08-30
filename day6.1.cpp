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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;  // No change if k = 1 or empty list

        // Dummy node before head (helps with edge cases)
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = dummy;
        ListNode* next = dummy;

        // Count total number of nodes
        int count = 0;
        while (curr->next) {
            curr = curr->next;
            count++;
        }

        // Reverse groups of k
        while (count >= k) {
            curr = prev->next;
            next = curr->next;
            // Reverse k-1 links inside the group
            for (int i = 1; i < k; i++) {
                curr->next = next->next;
                next->next = prev->next;
                prev->next = next;
                next = curr->next;
            }
            // Move prev to the end of the reversed group
            prev = curr;
            count -= k;
        }

        return dummy->next;
    }
};
