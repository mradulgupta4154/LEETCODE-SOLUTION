class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char,string>m;
        vector<string>vecna;
        vector<string>vec = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string c="abcdefghijklmnopqrstuvwxyz"; 
        for(int i =0 ;i<26;i++){
            m[c[i]]=vec[i];
        }
        for(int i =0;i<words.size();i++){
            string ans="";
            for(int j =0;j<words[i].size();j++){
                ans+=m[words[i][j]];
            }
            vecna.push_back(ans);
        }
        set<string>s(vecna.begin(),vecna.end());
        
        return s.size();
        
    }
};