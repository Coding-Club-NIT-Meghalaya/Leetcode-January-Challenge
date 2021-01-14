'''
Avishek Paul
B19CS038
hawt_sauce
'''

class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        while len(nums1) > m:
            nums1.pop()
        for i in range(n):
            nums1.append(nums2[i])
        nums1.sort()
        
        
