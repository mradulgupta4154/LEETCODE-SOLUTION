class Solution {
public:
    int countCommas(int n) {
        int diff=0;
        for(int i=1000;i<=n;i++){
            string c=to_string(i);
            diff+=(c.length()-1)/3;
        }
        return diff;
        
    }
};