class Solution(object):
    def sortPeople(self, names, heights):
        """
        :type names: List[str]
        :type heights: List[int]
        :rtype: List[str]
        """
        res = []
        for h in sorted(heights, reverse=True):
            i = heights.index(h)
            res.append(names[i])
        return res
        
