class Solution {
public:
    int hammingDistance(int x, int y) {
        string c=bitset<32>(x).to_string();
        string d=bitset<32>(y).to_string();
        int count=0;
        for(int i=0;i<c.length();i++){
            if(c[i]!=d[i]) count++;
        }
        return count;   
    }
};