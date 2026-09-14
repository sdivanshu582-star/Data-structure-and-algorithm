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
    ListNode* deleteMiddle(ListNode* head) {
        // brute force 
         ListNode* temp=head;
        int middle;
        int length;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        if(length==1){
          temp=NULL;
          return temp;
        }
        middle=length/2;
        temp=head;
        while(temp!=NULL){
            middle--;
            if(middle==0){
                break;
            }
            temp=temp->next;
        }
        ListNode*delnode=temp->next;
        temp->next=temp->next->next;
        delete delnode;
        return head;
    }
};