class Solution {
public:
    string frequencySort(string s) {
        string ans;
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        vector<pair<char,int>> vec(m.begin(), m.end());
        sort(vec.begin(), vec.end(), [](const pair<char,int>& a, const pair<char,int>& b) {
            return a.second > b.second;
        });

        for (auto& [num, count] : vec) {
            ans += string(count, num);
        }
        return ans;

    }
};