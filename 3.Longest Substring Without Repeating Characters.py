# https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution:
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        longest = ""
        curr = ""
        
        for c in s:
            if (c in curr):
                pos = curr.find(c) + 1
                curr = curr[pos:]
            curr += c
            if (len(curr) >= len(longest)):
                longest = curr
        return len(longest)