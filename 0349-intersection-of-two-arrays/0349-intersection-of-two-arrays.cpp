class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m =nums1.size() ,n =nums2.size();
        vector<int>ans;
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        for(auto i : nums1){
            m1[i]++;
        }
        for(auto i : nums2){
            m2[i]++;
        } 
        for(auto i : m1){
            if(m2.find(i.first)!=m2.end()){
                ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};