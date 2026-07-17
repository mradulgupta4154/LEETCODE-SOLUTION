class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> m(jewels.begin(),jewels.end());
        int count=0;
        for(int i = 0 ;i<stones.size();i++){
            if(m.contains(stones[i])){
            count++;
            }
        }
        return count;
    }
};