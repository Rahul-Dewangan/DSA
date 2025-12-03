class Solution:
    def generateParenthesis(self, n: int) -> List[str]:

        ans = []
        def helper(low, high, seq):
            if(len(seq) == 2*n):
                ans.append(seq)
                return
            
            if(low < n):
                helper(low+1, high, seq + '(')
            if(high < low):
                helper(low, high+1, seq + ')')
        
        helper(0, 0, '')

        return ans
        