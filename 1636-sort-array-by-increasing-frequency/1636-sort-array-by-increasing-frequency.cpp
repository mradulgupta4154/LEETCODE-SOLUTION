class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i =0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int>vec;
        for(auto&[num,count]:m){
            for(int i =0;i<count;i++){
                vec.push_back(num);
            }
        }
        sort(vec.begin(),vec.end(),[&](int a ,int b){
            if(m[a]!=m[b]) return m[a]<=m[b];
            return a>b;
        });
        return vec;
    }
};