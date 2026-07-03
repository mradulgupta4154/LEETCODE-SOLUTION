#include<vector>
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>vec;
        vector<int>vec2;
        vector<int>vec3;
        for(int i = 0 ; i<nums.size();i++){
            if(pivot>nums[i]){
                vec.push_back(nums[i]);
            }
            else if (pivot==nums[i]){
                vec3.push_back(nums[i]);
            }
            else{
                vec2.push_back(nums[i]);
                
            }
            
        }
        vec.insert(vec.end(),vec3.begin(),vec3.end());
        vec.insert(vec.end(),vec2.begin(),vec2.end());
        return vec;
    }
};