class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        list=[]
        count = {}
        for i in nums:
            count[i] = count.get(i, 0) + 1

        for i in count:
            if count[i] > len(nums) / 3:
                list.append(i)
        return list