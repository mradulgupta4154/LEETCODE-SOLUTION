class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>avg;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        while(nums.size()!=0){
            
            double sum=(nums.front()+nums.back())/2.0;
            avg.push_back(sum);
            nums.erase(nums.begin());
            nums.pop_back();
        }
        sort(avg.begin(),avg.end());
        return avg[0];
        
    }
};