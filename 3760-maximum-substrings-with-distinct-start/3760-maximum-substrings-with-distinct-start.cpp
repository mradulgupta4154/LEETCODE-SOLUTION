class Solution {
public:
    int maxDistinct(string s) {
        set<char>c;
        for(char t : s){
            c.insert(t);
        }
        return c.size();
        
    }
};