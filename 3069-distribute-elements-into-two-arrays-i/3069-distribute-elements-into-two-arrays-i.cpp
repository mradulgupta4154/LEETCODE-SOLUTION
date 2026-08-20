class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>vec1;
        vector<int>vec2;
        vec1.push_back(nums[0]);
        vec2.push_back(nums[1]);
        int a=0,b=0;
        for(int i=2;i<nums.size();i++){
            if(vec1[a]<vec2[b]){
                vec2.push_back(nums[i]);
                b++;
            }
            else{
                vec1.push_back(nums[i]);
                a++;
            }
        }
        vec1.insert(vec1.end(),vec2.begin(),vec2.end());
        return vec1;
        
    }
};