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

while(p!=NULL){
if (visited.find(p)!=visited.end()){
    return p;
}
visited.insert(p);
p=p->next;
}
     return NULL;  
    }
};