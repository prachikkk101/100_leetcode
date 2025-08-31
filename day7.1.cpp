class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if (!head) return nullptr;

      
        vector<int> vec;
        ListNode* temp = head;
        while (temp != nullptr) {
            vec.push_back(temp->val);
            temp = temp->next;   /
        }

        
        sort(vec.begin(), vec.end());

        
        ListNode* head1 = new ListNode(vec[0]);
        ListNode* tail1 = head1;
        for (int i = 1; i < vec.size(); i++) {
            tail1->next = new ListNode(vec[i]);
            tail1 = tail1->next;
        }

        return head1;
    }
};
