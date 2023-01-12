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
 int _add(int a, int b, int& rem){
     int sum;
     if(a + b + rem >= 10){
         sum = (a + b + rem)%10;
         rem = 1;
     }
     else {
         sum = (a + b + rem);
         rem = 0;
     }
     return sum;
 }
 void Insertlast(ListNode** ans,ListNode** last,  int data){
     ListNode* new_node = new ListNode();
     ListNode* temp = *last;
     new_node -> val = data;
        new_node -> next = NULL;
     if(temp == NULL){
        *ans = new_node;
        *last = new_node;
     }
     else {
        temp -> next = new_node;
         *last = new_node;  
         }
 }
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum, rem = 0;
        ListNode* ans = NULL, *temp1 = l1, *temp2 = l2, *last = NULL;
        while((temp1 != NULL || temp2 != NULL)){
            if(temp1 != NULL && temp2 != NULL){
                sum = _add(temp1 -> val, temp2 -> val, rem);
                Insertlast(&ans,&last,sum);
                temp1 = temp1 -> next;
                temp2 = temp2 -> next;
            }
            else if(temp1 == NULL && temp2 != NULL){
                sum = _add(0, temp2 -> val, rem);
                Insertlast(&ans,&last, sum);
                temp2 = temp2 -> next;
            }
            else {
                sum = _add(temp1 -> val, 0, rem);
                Insertlast(&ans,&last, sum);
                temp1 = temp1 -> next;
            }
            
        }
        if(rem != 0){
                Insertlast(&ans,&last, rem);
        }
        return ans;
    }
};
