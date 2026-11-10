class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        left=0
        right=len(height)-1
        sma=0
        while left<right:
            widht=right-left
            hei= min(height[left],height[right])
            sma=max(widht*hei,sma)
            if height[left]<height[right]:
                left+=1
            else:
                right-=1    
        return sma        