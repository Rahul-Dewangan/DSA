class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        if not points:
            return 0

        points.sort(key=lambda x: x[1])
        
        ans = 1
        end = points[0][1]
        for s, f in points:
            if s > end:
                ans +=1
                end = f
        
        return ans

        # arrows = 1

        # end = points[0][1]

        # for start, finish in points:

        #     if start > end:
        #         arrows += 1
        #         end = finish

        # return arrows