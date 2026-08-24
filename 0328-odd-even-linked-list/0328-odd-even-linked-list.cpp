class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;

        while (even != NULL && even->next != NULL) {
            
            // Connect odd nodes
            odd->next = even->next;
            odd = odd->next;

            // Connect even nodes
            even->next = odd->next;
            even = even->next;
        }

        // Attach even list after odd list
        odd->next = evenHead;

        return head;
    }
};
