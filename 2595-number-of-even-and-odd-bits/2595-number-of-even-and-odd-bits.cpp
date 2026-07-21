class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>vec(2,0);
        string c= bitset<32>(n).to_string();
        for(int i =c.length()-1;i>=0;i--){
            if(c[i]=='1'){
                if(i%2==0){
                    vec[1]++;
                }
                else{
                    vec[0]++;
                }
            }
        }
        
        return vec;
    }
};