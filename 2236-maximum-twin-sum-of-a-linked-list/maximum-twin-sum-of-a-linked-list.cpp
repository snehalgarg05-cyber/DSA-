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
    int pairSum(ListNode* head) {
        vector<int>result;
        ListNode*curr=head;
        while(curr){
            result.push_back(curr->val);
            curr=curr->next;
        }
        int n = result.size();
        int sum=0,max_sum=0;
        int start=0,end=n-1;
        while(start<=end){
            sum=0;
            sum=result[start]+result[end];
            max_sum=max(sum,max_sum);
            start++,end--;
        }
        return max_sum;
    }
};