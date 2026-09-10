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
    ListNode *detectCycle(ListNode *head) {
//BRUTE FORCE 
unordered_set<ListNode*>visited;
ListNode *p=head;

// while(p!=NULL){
// if (visited.find(p)!=visited.end()){
//     return p;
// }
// visited.insert(p);
// p=p->next;
// }
//      return NULL;  


//OPTIMAL SOLUTION
ListNode* slow=head;
ListNode* fast=head;

while(fast!=NULL && fast->next!=NULL){
    
    slow=slow->next;
    fast=fast->next->next;
    if(fast==slow){
     break;
    }
}
if (fast==NULL || fast->next==NULL){
    return NULL ;
}
//step2->check wheree they meetss
slow=head;
while (slow!=fast){
    slow=slow->next;
    fast=fast->next;
}
return slow;
    }
};