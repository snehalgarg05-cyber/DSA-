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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>result;
        ListNode*temp=head;
        while(temp){
            result.push_back(temp->val);
            temp=temp->next;
        }
        int n = result.size();
        ListNode*Head=NULL;
        for(int i=0;i<n;i=i+2){
            if(Head==NULL){
                Head = new ListNode(result[i]);
            }
            else{
                ListNode*insert = new ListNode(result[i]);
                insert->next=Head;
                Head=insert;
            }   
        }
        for(int i=1;i<n;i=i+2){
            ListNode*insert = new ListNode(result[i]);
            insert->next=Head;
            Head=insert;
        }
        ListNode*prev=NULL,*fut=NULL,*curr=Head;
        while(curr){
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        Head=prev;
        return Head;
    }
};