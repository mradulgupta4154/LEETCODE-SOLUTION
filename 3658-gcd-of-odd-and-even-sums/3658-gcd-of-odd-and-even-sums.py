class Solution:
    def gcdOfOddEvenSums(self, n: int) -> int:
        oddsum=0
        evensum=0
        for i in range (2*n):
            if(i%2==0):
                evensum+=i
            else:
                oddsum+=i
        return gcd(evensum,oddsum)
        