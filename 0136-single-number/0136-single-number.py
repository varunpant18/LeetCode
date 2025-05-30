class Solution(object):
    def singleNumber(self, nums):
        key = 0
        for num in nums:
            key ^= num
        return key
      
        