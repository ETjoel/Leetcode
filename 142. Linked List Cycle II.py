class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return None
        if head is head.next:
            return head
        temp = head
        dic = {}
        i = 1
        while temp.next:
            if temp.next in dic:
                return temp.next
            dic[temp] = 0
            i += 1
            temp = temp.next
        return None
