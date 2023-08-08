# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        if not head.next:
            return head
        store = []
        i = 1
        temp = head
        while temp:
            if i >= left and i <= right:
                store.append(temp.val)
            temp = temp.next
            i += 1
        i = 1
        temp = head
        while temp:
            if i >= left and i <= right:
                temp.val = store.pop()
            temp = temp.next
            i += 1
        return head
