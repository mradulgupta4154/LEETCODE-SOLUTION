class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> m;
        for(int i = 0; i < words.size(); i++){
            m[words[i]]++;
        }

        // instead of a vector<int> of just counts, keep word+count together
        vector<pair<string,int>> vec;
        for(auto& [chara, count] : m){
            vec.push_back({chara, count});
        }
        sort(vec.begin(), vec.end(), [](const pair<string,int>& a, const pair<string,int>& b){
            if(a.second != b.second) return a.second > b.second;
            return a.first < b.first;
        });

        vector<string> res;
        for(int i = 0; i < k; i++){
            res.push_back(vec[i].first);
        }
        return res;
    }
};