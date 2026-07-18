class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>m(allowed.begin(),allowed.end());
        int count=0;
        for(int i = 0 ;i<words.size();i++){
            bool ok = true;
            for(int j =0 ;j<words[i].size();j++){
               if(!m.contains(words[i][j])){
                  ok =false;
               }
            }
            if(ok) count++;
        }

        return count;
    }
};