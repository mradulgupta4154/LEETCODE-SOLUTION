class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>m;
        vector<int>counts;
        for(int i : arr){
            m[i]++;
        }
        for(auto&[num,count]:m){
            counts.push_back(count);

        }
        sort(counts.rbegin(),counts.rend());
        int half=arr.size()/2;
        int r=0,s=0;
        for(int c: counts){
            if(r>=half) break;
            r+=c;
            s++;
        }
        return s;
    }
};