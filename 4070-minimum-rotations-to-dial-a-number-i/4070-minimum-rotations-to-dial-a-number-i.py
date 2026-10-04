class Solution(object):
    def minRotations(self, s):
        """
        :type s: str
        :rtype: int
        """
        cur=0
        res=0
        for ch in s:
            digit=int(ch)
            diff=abs(cur-digit)
            min_rotations=min(diff,10-diff)
            res+=min_rotations
            cur=digit
        return res
        