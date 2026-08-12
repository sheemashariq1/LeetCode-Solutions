class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        dupp = set()
        for num in nums:
            if num in dupp:
                return True
            dupp.add(num)
        return False
        