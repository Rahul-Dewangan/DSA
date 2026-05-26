class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        ans = []

        for a in asteroids:

            while ans and (ans[-1] > 0 and a < 0):

                if abs(ans[-1]) > abs(a):
                    break
                
                elif abs(ans[-1]) < abs(a):
                    ans.pop()
                    continue
                
                else:
                    ans.pop()
                    break
            
            else:
                ans.append(a)
        
        return ans