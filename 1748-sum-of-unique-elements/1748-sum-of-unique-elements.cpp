class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        unordered_map<int,int>m;
        for(auto e:nums){
            m[e]++;
        }
        for(auto e:m){
            if(e.second ==1){
                sum += e.first;
            }
        }
        return sum;
    }
};