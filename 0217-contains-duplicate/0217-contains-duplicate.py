class Solution(object):
    def containsDuplicate(self, nums):
        dupp = set()

        for num in nums:
            if num in dupp:
                return True
            dupp.add(num)
            
        return False
        