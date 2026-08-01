class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        unordered_map<string, int> count;
        for (char &c : paragraph) {
            c = isalpha(c) ? tolower(c) : ' ';
        }
        
        stringstream ss(paragraph);
        string word;
        string result;
        int maxCount = 0;
        
        while (ss >> word) {
            if (bannedSet.count(word)) continue;
            count[word]++;         
            if (count[word] > maxCount) {
                maxCount = count[word];
                result = word;
            }
        }
        return result;        
    }
};