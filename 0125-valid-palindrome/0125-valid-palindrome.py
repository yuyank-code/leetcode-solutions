class Solution(object):

    def isPalindrome(self, s):

        s = s.lower()

        new_s = ""

        for c in s:
            if c.isalnum():
                new_s += c.lower()

        s = new_s

        r = s[::-1]

        if r == s:
            return True
        else:
            return False