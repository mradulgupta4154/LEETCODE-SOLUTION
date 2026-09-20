class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int, vector<int>> start;
        for (int i = 0; i < pieces.size(); i++) {
            start[pieces[i][0]] = pieces[i];
        }

        vector<int> vec;
        int i = 0;
        while (i < arr.size()) {
            if (start.find(arr[i]) == start.end()) return false;
            vector<int>& p = start[arr[i]];
            for (int j = 0; j < p.size(); j++) {
                vec.push_back(p[j]);
            }
            i += p.size();
        }

        bool is = true;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != vec[i]) is = false;
        }
        return is;
    }
};