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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(), *tail = ans;
        if(list1 != NULL || list2 != NULL){
            if(list1 != NULL && list2 != NULL){
                if(list1 -> val <= list2 -> val){
                ans -> val = list1 -> val;
                list1 = list1 -> next;
                }
                else {
                    ans -> val = list2 -> val;
                    list2 = list2 -> next;
                }
            }
            else if(list1 != NULL) {
                ans -> val = list1 -> val; list1 = list1 -> next;
            }
            else {ans -> val = list2 -> val; list2 = list2 -> next;}
            tail = ans;
            ans -> next = tail;
            tail -> next = NULL;
        }
        else ans = NULL;
        while(list1 != NULL || list2 != NULL){
            ListNode* temp = new ListNode();
            if(list1 != NULL && list2 != NULL){
                if(list1 -> val <= list2 -> val){
                temp -> val = list1 -> val;
                list1 = list1 -> next;
                }
                else {
                    temp -> val = list2 -> val;
                    list2 = list2 -> next;
                }
            }
            else if(list1 != NULL) {
                temp -> val = list1 -> val; list1 = list1 -> next;
            }
            else {temp -> val = list2 -> val; list2 = list2 -> next;}
            temp -> next = NULL;
            tail -> next = temp;
            tail = temp;
        }
        return ans;
    }
};
