class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        ans = []
        ans.append(intervals[0])

        for i in intervals:
            if ans[len(ans)-1][1] >= i[0]:
                if  ans[len(ans)-1][1] <= i[1]:
                    ans[len(ans)-1][1] = i[1]
            else:
                ans.append(i)
        
        return ans