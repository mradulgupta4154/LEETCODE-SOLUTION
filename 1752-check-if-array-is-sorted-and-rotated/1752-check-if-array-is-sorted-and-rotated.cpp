class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> vec(nums.begin(), nums.end());
        sort(vec.begin(), vec.end());
        
        int n = nums.size();
        for(int x = 0; x < n; x++){
            bool ok = true;
            for(int i = 0; i < n; i++){
                if(vec[i] != nums[(i+x)%n]){
                    ok = false;
                    break;
                }
            }
            if(ok) return true;
        }
        return false;
    }
};