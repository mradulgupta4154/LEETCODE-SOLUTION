class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set <double> vec;
        sort(nums.begin(),nums.end());
        while(nums.size()>0){
            double avg=(nums.front()+nums.back())/2.0;
            vec.insert(avg);
            nums.erase(nums.begin());
            nums.erase(nums.end()-1);
        }
        return vec.size();
    }
};