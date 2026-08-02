class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int,int> m;
        unordered_map<char,int> s;
        for (char i : suits) s[i]++;
        for (int i : ranks) m[i]++;

        for (auto& [suit, count] : s) {
            if (count == 5) return "Flush";
        }

        int maxCount = 0;
        for (auto& [num, count] : m) {
            maxCount = max(maxCount, count);
        }

        if (maxCount >= 3) return "Three of a Kind";
        if (maxCount == 2) return "Pair";
        return "High Card";

    }
};