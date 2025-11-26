class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()
        if len(strs) == 0:
            return ""
        first = strs[0]
        last = strs[-1]
        if first =="" or last =="":
            return ""
        if first[0] != last[0]:
                return  ""
        for i in range(min(len(first), len(last))):
            if first[i] != last[i]:
                return first[:i]
        return first