class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        string c=bitset<32>(start).to_string();
        string d=bitset<32>(goal).to_string();
        for(int i=0;i<32;i++){
            if(c[i]!=d[i]) count++;
        }
        return count;
        
    }
};