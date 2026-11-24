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
       ListNode * temp=NULL;
ListNode *Curr=head;
     
       while( Curr!=NULL &&Curr->next!=NULL ){
if(Curr->val==Curr->next->val){
temp=Curr->next;
Curr->next=temp->next;
delete(temp);
}else{
Curr=Curr->next;
}
       }
 
       Curr=head;
       return Curr; 
    }
};