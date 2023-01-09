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
 int count_LinkedList(ListNode* head){
     int count = 0;
     ListNode* temp = head;
     while(temp != NULL){
         temp = temp -> next;
         count++;
     }
     return count;
 }
 int sum_base_10(ListNode* head, int count){
     int sum = 0;
    ListNode* temp = head;
     for(int i = count -1; i>= 0; i--){
         sum += (temp -> val * pow(2, i));
         temp = temp -> next;
     }
     return sum;
 }
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int n = count_LinkedList(head);
        int Decimal = sum_base_10(head, n);
        return Decimal;
    }
};
