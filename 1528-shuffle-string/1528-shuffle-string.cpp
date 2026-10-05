class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char>vec(s.length());
        for(int i=0;i<s.length();i++){
            vec[indices[i]]=s[i];
        }
        string c="";
        for(int i=0;i<vec.size();i++){
            c+=vec[i];
        }
        return c;
        
    }
};