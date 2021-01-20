"""
Avishek Paul
B19CS038
hawt_sauce
"""

class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        d = defaultdict(lambda: 0)
        for x in arr:
            d[x] = 1
        key = 0
        i = 0
        while key < k:
            i += 1
            if d[i] == 0: key += 1
        return i
        
