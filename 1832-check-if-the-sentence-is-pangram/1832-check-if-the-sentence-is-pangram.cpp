class Solution {
public:
    bool checkIfPangram(string s) {
        string c="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<c.length();i++){
            if(!s.contains(c[i])) return false;
        }
        return true;

        
    }
};