class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        i =1
        num_set=set(nums)
        while True:
            if k*i not in num_set:
                return k*i
            i+=1
        