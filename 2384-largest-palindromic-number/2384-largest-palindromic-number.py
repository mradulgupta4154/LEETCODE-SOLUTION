class Solution:
    def largestPalindromic(self, num: str) -> str:

        c = Counter(num)
    
        middle = ''
        first_half = ''

        for i in range(9, -1, -1): 
            s = str(i) 

            if s == '0' and not first_half: 
                return middle if middle else "0"

            to_add = c[s] // 2

            first_half += (s * to_add)

            if middle == '' and c[s] % 2 == 1: 
                middle = s

        return first_half + middle + first_half[::-1]


        