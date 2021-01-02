# Avishek Paul
# B19CS038
# Leetcode Username - hawt_sauce

class Solution:
    def canFormArray(self, arr: List[int], pieces: List[List[int]]) -> bool:
        d = collections.defaultdict()
        for piece in pieces:
            d[piece[0]] = piece 
        i = 0
        while i < len(arr):
            if arr[i] not in d:
                return False
            else:
                piece_list = d[arr[i]]
                for num in piece_list:
                    if num == arr[i]:
                        i += 1  
                    else:
                        return False
        return True
