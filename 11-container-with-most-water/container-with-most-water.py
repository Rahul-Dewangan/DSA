class Solution:
    def maxArea(self, height: List[int]) -> int:
        i, j = 0, (len(height)-1)
       
        ans = float('-inf')
        while(i<j):
            area = (j-i)*min(height[i], height[j])
            ans = max(ans, area)
            if height[i] < height[j]:
                i+=1
            else:
                j-=1
        
        return ans