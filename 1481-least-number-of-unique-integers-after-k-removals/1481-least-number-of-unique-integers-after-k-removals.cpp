class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        set<int>s;
        unordered_map<int,int>m;
        for(int i:arr){
            m[i]++;
        }
        sort(arr.begin(),arr.end(),[&](int a,int b){
            if(m[a]!=m[b]) return m[a]>m[b];
            return a<b;
        });
        for(int i =0;i<arr.size()-k;i++){
            s.insert(arr[i]);
        }
        return s.size();

        
    }
};