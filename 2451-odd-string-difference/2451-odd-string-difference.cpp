class Solution {
public:
    vector<int> getDiff(string& w) {
        vector<int> d;
        for (int j = 0; j + 1 < w.size(); j++)
            d.push_back(w[j+1] - w[j]);
        return d;
    }

    string oddString(vector<string>& words) {
        vector<int> d0 = getDiff(words[0]);
        vector<int> d1 = getDiff(words[1]);
        vector<int> d2 = getDiff(words[2]);

        // find the "majority" diff among the first 3
        vector<int> majority = (d0 == d1) ? d0 : d2;

        for (auto& w : words) {
            if (getDiff(w) != majority) return w;
        }
        return ""; // unreachable if input guarantees exactly one odd word
    }
};