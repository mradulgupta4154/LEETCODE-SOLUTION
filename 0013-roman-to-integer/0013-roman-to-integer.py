class Solution(object):
    def romanToInt(self, s):
        d={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        sum=0
        k=list(d.keys())
        for j in range(len(s)):
                if j+1<len(s) and d[s[j]]<d[s[j+1]]:
                   sum-=d[s[j]]
                else:
                   sum+=d[s[j]]
        return sum
                

        