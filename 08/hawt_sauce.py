'''
Avishek Paul
B19CS038
hawt_sauce
'''

class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        w1, w2 = '', ''
        for sub in word1 : w1 += sub
        for sub in word2 : w2 += sub
        return w1 == w2
        
        
