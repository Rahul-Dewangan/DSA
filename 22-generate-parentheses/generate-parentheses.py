class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        
        lst = []
        lst1 = []
        low = 2**(2*n)
        for i in range(low):
            st = bin(i)[2:].zfill(2*n)
            sum = 0
            flag = True
            res = ""
            for c in st:
                if c == '1':
                    sum += 1
                elif c == '0':
                    sum += -1

                if sum < 0:
                    flag = False
                    break

            
            if(flag and sum == 0):
                for c in st:
                    if c == '1':
                        res = res + '('
                    elif c == '0':
                        res = res +  ')'
            
            if len(res):
                lst.append(res)
                    

        
        # print(lst)

        # print(str(bin(10))[2:])
        return lst