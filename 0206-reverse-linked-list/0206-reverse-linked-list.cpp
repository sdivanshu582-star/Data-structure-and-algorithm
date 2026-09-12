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
    ListNode* reverseList(ListNode* head) {
//                // BRUTE FORCE 
//         ListNode*p=head;
//        stack<int> st;
//         while(p!=NULL){
//             st.push(p->val);
//             p=p->next;
//         }
//         p=head;
//         while(p!=NULL){
//             p->val=st.top();
//             p=p->next;
// st.pop();
//         }
//         return head;

//OPTIMAL APPROACH 
//OPTIMAL APPROACH APPROACH 
ListNode* last=head;
ListNode* temp=head;
ListNode* prev=NULL;
ListNode* front;
while(temp!=NULL){
front=temp->next;
temp->next=prev;
prev=temp;
temp=front;
}


return prev;

    }
};