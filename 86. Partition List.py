# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        if not head:
            return head
        temp = head.next
        follow = head
        late = head
        while temp:
            if temp.val < x and temp is not late:
                if late.val < x:
                    follow.next = temp.next
                    temp.next = late.next
                    late.next = temp
                    late = late.next
                    temp = follow.next
                    print("it is not late")
                else:
                    follow.next = temp.next
                    print("1", follow.val)
                    print("2", late.val)
                    temp.next = late
                    late = temp
                    head = late
                    print("3", late.val)
                    temp = follow.next
                    print("it is late for you")
            else:
                temp = temp.next
                follow = follow.next
                
        return head

