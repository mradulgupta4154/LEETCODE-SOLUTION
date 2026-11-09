class Solution {
public:
    int percentageLetter(string s, char l) {
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]== l) c++;
        }
        return (c*100)/s.length();

        
    }
};