class Solution:
    def printVertically(self, s: str) -> List[str]:
        ans = []

        words = s.split(" ")

        i = 0

        still = True

        while still:
            still = False
            new_word = []
            space_count = 0
            for w in words:
                if i < len(w):
                    still = True
                    for _ in range(space_count):
                        new_word.append(" ")
                    new_word.append(w[i])
                    space_count = 0
                else:
                    space_count += 1
            if still:
                i += 1
                ans.append("".join(new_word))
        
        return ans
            