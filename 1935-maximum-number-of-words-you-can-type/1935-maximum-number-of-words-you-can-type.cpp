class Solution {
public:
    int canBeTypedWords(string text, string broken) {
        vector<string>vec;
        set<char>s;
        for(int i=0;i<broken.length();i++){
            s.insert(broken[i]);
        }
        stringstream ss(text);
        string word;
        while(ss>>word){
            vec.push_back(word);
        }
        int count=0;
        for(int i=0;i<vec.size();i++){
            for(int j =0;j<vec[i].size();j++){
                if(s.find(vec[i][j])!=s.end()) {
                    count++;
                    break;
                }
            }
        }
        return vec.size()-count;

        
    }
};