class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        vector<int>vec;
        unordered_map<int,int>m;
        for(int i=0;i<deck.size();i++){
            m[deck[i]]++;
        }
        int g = 0;
        for (auto& [num, count] : m) {
            g = __gcd(g, count);
        }
        return g >= 2;
        
    }
};