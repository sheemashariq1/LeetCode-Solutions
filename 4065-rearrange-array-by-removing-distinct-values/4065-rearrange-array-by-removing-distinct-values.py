class Solution(object):
    def rearrangeArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans = []
        while nums:
            distinct = sorted(set(nums))
            for i in distinct:
                ans.append(i)
                nums.remove(i)
        return ans