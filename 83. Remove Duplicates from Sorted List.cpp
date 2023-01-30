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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* ans = new ListNode();
        ListNode* tail = new ListNode();
        int next_val;
        if(temp != NULL){
            ListNode* new_node = new ListNode(temp -> val);
            new_node -> next = NULL;
            ans = new_node;
            tail = new_node;
            ans -> next = tail;
            next_val = new_node -> val;
        }
        else ans = NULL;
        while(temp != NULL){
            ListNode* new_node1 = new ListNode(temp -> val);
            if(new_node1 -> val != next_val){
                new_node1 -> next = NULL;
                tail -> next = new_node1;
                tail = new_node1;
                next_val = new_node1 -> val; 
            }
            temp = temp -> next;
        }
        if(ans == tail){ ans -> next = NULL;}
        return ans;
    }
};
