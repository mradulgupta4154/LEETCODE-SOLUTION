class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        vector<int>vec;
        for(auto&[num,count]:m){
            vec.push_back(count);
        }
        sort(vec.begin(),vec.end());
        for(int i =0;i<vec.size()-1;i++){
            if(vec[i]==vec[i+1]) return false;
        }
        return true;
        
    }
};