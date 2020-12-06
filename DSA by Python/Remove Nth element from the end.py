class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        num = self.solve(head.next,head,n)
        return head.next if num == n else head
    def solve(self,head,prev,n):
        if not head:
            return 1
        num = self.solve(head.next,head,n)
        if n == num:
            prev.next=head.next
        return num+1    
