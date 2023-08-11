class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return head
        slow, fast, follow = head, head.next.next, head.next
        odd = True
        while fast:
            if odd:
                follow.next = fast.next
                fast.next = slow.next
                slow.next = fast
                slow = slow.next
                fast = follow.next
                odd = False
            else:
                follow = fast
                fast = fast.next
                odd = True
        return head
