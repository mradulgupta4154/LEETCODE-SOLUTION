class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i =0;i<arr.size();i++){
            m[arr[i]]++;
        }
        int maxi=INT_MIN;
        for(auto&[num,count]:m){
            if(count==num){
                maxi=max(num,maxi);
                
            }
        }
        if(maxi!=INT_MIN){
            return maxi;
        }
        return -1;
        
    }
};