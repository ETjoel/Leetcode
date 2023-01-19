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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++; temp = temp -> next;
        }
        cout << count;
        temp = head;
        stack<int> s;
        for(int i = 1; i <= count /2; i++){
            s.push(temp -> val);
            temp = temp -> next;
        }
        if(count % 2 == 0){
            while(temp != NULL){
                if(s.top() == temp -> val){
                    s.pop(); temp = temp -> next;
                }
                else break;
            }
        }
        else {
            temp = temp -> next;
            while(temp != NULL){
                if(s.top() == temp -> val){
                    s.pop(); temp = temp -> next;
                }
                else break;
            }
        }
        if(s.empty()) return true;
        else return false;

    }
};
