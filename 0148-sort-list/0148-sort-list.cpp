class Solution {
public:

    // Merge two sorted linked lists
    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode dummy(0);
        ListNode* temp = &dummy;

        while (left && right) {
            if (left->val <= right->val) {
                temp->next = left;
                left = left->next;
            }
            else {
                temp->next = right;
                right = right->next;
            }

            temp = temp->next;
        }

        if (left)
            temp->next = left;
        else
            temp->next = right;

        return dummy.next;
    }

    ListNode* sortList(ListNode* head) {

        // 0 or 1 node is already sorted
        if (head == nullptr || head->next == nullptr)
            return head;

        // Find middle
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Split into two lists
        ListNode* right = slow->next;
        slow->next = nullptr;

        // Sort both halves
        ListNode* left = sortList(head);
        right = sortList(right);

        // Merge
        return merge(left, right);
    }
};