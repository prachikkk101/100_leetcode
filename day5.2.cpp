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
…        return newhead;
    }
};
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head) return NULL;  

        vector<int> vec;
        ListNode* temp = head;
        while (temp != NULL) {
            vec.push_back(temp->val);
            temp = temp->next;
        }

        // build new list
        ListNode* newhead = new ListNode(vec[0]);
        ListNode* temp1 = newhead;

        // odd indices first (0,2,4,...)
        for (int i = 2; i < vec.size(); i += 2) {
            temp1->next = new ListNode(vec[i]);
            temp1 = temp1->next;
        }

        // even indices next (1,3,5,...)
        for (int i = 1; i < vec.size(); i += 2) {
            temp1->next = new ListNode(vec[i]);
            temp1 = temp1->next;
        }

        return newhead;
    }
};
