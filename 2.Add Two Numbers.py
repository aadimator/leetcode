# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        if not l1 or not l2: return l1 or l2
        resultNode = ListNode(0)
        currentNode = resultNode
        carry = 0
        while l1 or l2:
            sum = carry;
            if (l1):
                sum += l1.val
                l1 = l1.next
            if (l2):
                sum += l2.val
                l2 = l2.next
            currentNode.next = ListNode(sum % 10)
            currentNode = currentNode.next
            carry = sum / 10
        if carry: currentNode.next = ListNode(carry)
            
        return resultNode.next