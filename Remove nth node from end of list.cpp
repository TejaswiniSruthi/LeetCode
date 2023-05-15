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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next){
            ListNode* res=NULL;
            return res;
        }
        int temp=n;
        ListNode*prev;
        ListNode*node=head;
        ListNode*nnode=head;
        while(n--){
            node=node->next;
        }
        while(node!=NULL){
            node=node->next;
            prev=nnode;
            nnode=nnode->next;
        }
        if(temp!=1){
            *(nnode)=*(nnode->next);
        }
        else{
            prev->next=NULL;
        }
        return head;
    }
};
