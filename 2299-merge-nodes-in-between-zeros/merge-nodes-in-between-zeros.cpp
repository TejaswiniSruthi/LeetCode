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
        ListNode* temp = head;
        while(temp->next!=NULL){
            int sum = (temp->next)->val;
            if(sum == 0){
                if((temp->next)->next==NULL){
                    temp->next=NULL;
                    break;
                }
                temp = temp->next;
                continue;
            }
            temp->val += sum;
            temp->next = (temp->next)->next;
            
        }
        return head;
    }
};