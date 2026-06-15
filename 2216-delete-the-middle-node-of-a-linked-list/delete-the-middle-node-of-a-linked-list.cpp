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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head == NULL || head->next == NULL){
            return NULL;
        }

        int size = 0;

        ListNode* temp = head;

        while(temp != NULL){
            size++;
            temp = temp->next;
        }

        int mid = size / 2;

        ListNode* curr = head;
        ListNode* prev = NULL;

        while(mid--){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        delete curr;

        return head;
    }
};