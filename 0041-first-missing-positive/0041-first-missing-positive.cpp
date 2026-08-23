class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> r;
        for (int n: nums){
            if (n>0) r.push_back(n);
        }
        sort(r.begin(),r.end());
        int target = 1;
        for (int i = 0 ; i<r.size();i++){
            if(r[i]==target){
                target+=1;
            }
        }
        return target;
        
    }
};