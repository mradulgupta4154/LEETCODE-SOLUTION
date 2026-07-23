class Solution {
public:
    vector<int>og;
    int n ;
    Solution(vector<int>& nums) {
        og=nums;
        n=og.size();
        
    }
    
    vector<int> reset() {
        return og;
        
    }
    
    vector<int> shuffle() {
        vector<int>shuffled=og;
        int l=n;
        for(int i=n-1;i>=0;i--){
            int j =rand()%l;
            swap(shuffled[i],shuffled[j]);
            l--;
        }       
        return shuffled; 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */