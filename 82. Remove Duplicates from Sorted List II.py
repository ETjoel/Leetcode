# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return head
        temp = head
        dic = {}
        while temp:
            if temp.val in dic:
                dic[temp.val] += 1
            else:
                dic[temp.val] = 1
            temp = temp.next
        head = ListNode()
        lazy = head
        for i in range(-101, 101):
            if i in dic and dic[i] == 1:
                temp = ListNode(i, None)
                if not lazy:
                    lazy.val = i
                else:
                    lazy.next = temp
                    lazy = lazy.next
        return head.next
                
