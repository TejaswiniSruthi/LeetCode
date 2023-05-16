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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*ptr=head;
        int t;
        while((ptr->next)->next!=NULL){
            if(ptr->val!=0 and (ptr->next)->val!=0){
                t=(ptr->val)+((ptr->next)->val);
                *(ptr)=*(ptr->next);
                ptr->val=t;
            }
            else{
                if(ptr->val==0){
                    
                    *(ptr)=*(ptr->next);
                }
                else{
                    ptr=ptr->next;
                }
                
            }
        }
        ptr->next=NULL;
        return head;
    }
};
