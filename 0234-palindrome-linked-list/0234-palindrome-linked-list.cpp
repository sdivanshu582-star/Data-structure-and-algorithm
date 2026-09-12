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
    bool isPalindrome(ListNode* head) {
        //Brute force approach
        vector<int>list;
        ListNode* p=head;
        while(p!=NULL){
            list.push_back(p->val);
            p=p->next;
        }
        reverse(list.begin(),list.end());
        p=head;
        int i=0;
        while (p!=NULL){
            if(p->val!=list[i]){
                return false;
            }
            i++;
            p=p->next;
        }
        return true;
    }
};