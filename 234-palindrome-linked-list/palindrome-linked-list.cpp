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
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {//SC-O(N) AS VECTOR
//         vector<int>result;
//         ListNode*temp=head;
        
//         while(temp){
//             result.push_back(temp->val);
//             temp=temp->next;
//         }
//         int n = result.size();
//         int start=0,end=n-1;
//         while(start<=end){
//             if(result[start]!=result[end]){
//                 return false;
//             }
//             start++,end--;
//         }
//         return true;
//     }
// };


class Solution {
public:
    bool isPalindrome(ListNode* head) {

        int count=0;
        ListNode*temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(count==1){
            return true;
        }
        count=count/2;
        
        ListNode*curr=head,*prev=NULL;
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        ListNode*tail=curr;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        ListNode*fut;
        while(curr){
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        while(head!=NULL){
            if(head->val!=tail->val){
                return false;
            }
            head=head->next;
            tail=tail->next;
        }
        return true;
    }
};


























        