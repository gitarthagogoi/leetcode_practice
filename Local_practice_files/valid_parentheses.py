class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) == 2:
            if s[0] == s[1]:
                return True
        if len(s) % 2 != 0:
            return False
        for i in range(len(s) // 2):
            if s[i] != s[len(s)-1-i]:
                return False
        return True