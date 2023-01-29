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
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++; temp = temp -> next;
        }
        ListNode* before_nth = head;
        for(int i = 1; i < count - n; i++){
            before_nth = before_nth -> next;
        }
        if(count - n < 1){
            if(before_nth -> next){
                ListNode* n = before_nth;
                head = n -> next;
                delete(n);
            }
            else {
                head = NULL;
            }
        }
        else {
            if(before_nth -> next){
                ListNode* n = before_nth -> next;
                before_nth -> next = n -> next;
                delete(n);
            }
            else {
                head = NULL;
            }
        }
        return head;

    }
};
