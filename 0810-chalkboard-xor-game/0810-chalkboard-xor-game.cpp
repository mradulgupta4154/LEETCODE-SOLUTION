class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int txor = 0;
        for(int i :nums){
            txor^=i;
        }
        bool ifzero = (txor==0);
        bool evenlength =(nums.size()%2==0);
        return ifzero or evenlength;
        
    }
};