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
        int count=0;
        ListNode*curr=head;
        
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        int k = count-n;
        ListNode*prev=NULL;
        curr=head;
        if(k==0){
            head=head->next;
            return head;
        }
        while(k--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        return head;
    }
};