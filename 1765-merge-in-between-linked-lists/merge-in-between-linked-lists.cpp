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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int x = b-a+1;
        ListNode* temp = list1;
        while(a!=1 && temp->next!= NULL){
            // cout<<temp->val<<" "<<a<<"\n";
            temp = temp->next;
            a-=1;
        }
        ListNode* temp1 = temp->next;
        temp->next = list2;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        
        while(x--){
            temp1=temp1->next;
        }
        temp->next = temp1;
        return list1;
        
    }
};