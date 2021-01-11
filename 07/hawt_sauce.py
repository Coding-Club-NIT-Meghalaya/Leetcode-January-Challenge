'''
Avishek Paul
B19Cs038
hawt_sauce
'''

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        cset = set()
        out,i,j = 0,0,0
        while i < len(s) and j < len(s):
            if s[j] in cset:
                cset.discard(s[i])
                i += 1
            else:
                cset.add(s[j])
                j += 1
                out =  max(out,j-i)
        return out
        
        
