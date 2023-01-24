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
    ListNode* reverseList(ListNode* head) {
        ListNode* ans = new ListNode();
        ListNode* c = head;
        ListNode* temp1 = head;
        int count = 0;
        while(c != NULL){
            count++; c = c -> next;
        }

        if(temp1 != NULL){
            ans -> val = temp1 -> val;
            ans -> next = NULL;
            temp1 = temp1 -> next;
        }
        else ans = temp1;
        while(temp1 != NULL){
            ListNode* temp = new ListNode(temp1 -> val);
            temp -> next = ans;
            ans = temp;
            temp1 = temp1 -> next;
        }
        return ans;
    }
};
