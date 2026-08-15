class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string>vec;
        for(int i =0 ;i<arr.size();i++){
            if(count(arr.begin(),arr.end(),arr[i])==1) vec.push_back(arr[i]);
        }
        if(vec.size()>=k){
            return vec[k-1];
        }
        return "";
    }
};