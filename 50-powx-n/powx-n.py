class Solution:
    def helper(self, X, n):
        if n == 0:
            return 1
        if n == 1:
            return X
        if n == -1:
            return 1 / X

        # compute only once
        half = self.helper(X, n // 2)

        if n % 2:
            return half * half * X
        else:
            return half * half
        
    def myPow(self, x: float, n: int) -> float:
        return self.helper(x, n)
