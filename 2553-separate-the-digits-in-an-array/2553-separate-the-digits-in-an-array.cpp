class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string a="";
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            a+=to_string(nums[i]);
        }
        for(int i=0;i<a.length();i++){
            vec.push_back(a[i]-'0');
        }
        return vec;
        
    }
};