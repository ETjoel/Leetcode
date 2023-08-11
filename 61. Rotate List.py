class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head or not head.next:
            return head
        temp = head
        count = 0
        while temp.next:
            temp = temp.next
            count += 1
        temp.next = head
        count += 1
        count = count - k % count
        print(count)
        while count > 0:
            temp = temp.next
            count -= 1
        head = temp.next
        temp.next = None
        return head
