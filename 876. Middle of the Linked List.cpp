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
 int size(ListNode* head){
     int count = 0;
     ListNode* temp = head;
    while(temp != NULL){
        count++; temp = temp -> next;
    }
    return count;
 }
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* ans;
        int count = size(head);
        ListNode* temp = head;
        if(count % 2 != 0){
            for(int i = 1; i < (count + 1)/2;i++){
                temp = temp -> next;
            }
            ans = temp;
        }
        else {
            for(int i = 1; i <= count /2; i++){
                temp = temp -> next;
            }
            ans = temp;
        }
        return ans;
    }
};
