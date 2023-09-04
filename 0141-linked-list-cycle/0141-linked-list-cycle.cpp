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
    bool hasCycle(ListNode *head) {
        ListNode* ptr=head;
        while(ptr!=NULL){
            if(ptr->val==1e5+1) return true;
            ptr->val=1e5+1;
            ptr=ptr->next;
        }
        return false;
    }
};