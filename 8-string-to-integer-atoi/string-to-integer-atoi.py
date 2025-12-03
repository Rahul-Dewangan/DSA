class Solution:
    def myAtoi(self, s: str) -> int:
        i_l = s.strip()
        if len(i_l) == 0:
            return 0

        if(i_l[0] == '-'):
            sign = 1
            i_l = i_l[1:]
        elif(i_l[0] == '+'): 
            sign = 0
            i_l = i_l[1:]
        else: 
            sign = 0
        
        res = ""
        for i in i_l:
            if i.isdigit():
                res += i
            else:
                break
        
        ans = 0
        if sign and len(res):
            ans = 0 - int(res)
        elif len(res):
            ans = int(res)
        
        if ans < -2**31:
            ans = -2**31
        elif ans > (2**31) - 1:
            ans = (2**31) - 1
        
        return ans


        