class Solution {
public:
    int compress(vector<char>& chars) {
        string w ="";
        for (int i =0 ; i< chars.size();){
            int count = 0 ;
            char c = chars[i];
            while (i< chars.size() and c==chars[i]){
                i++;
                count++;
            }
            w+=c;
            if (count>1) w+=to_string(count);  
        }
        for (int i = 0 ; i<w.size();i++)
            chars[i]=w[i];
        return w.length();
        
    }
};