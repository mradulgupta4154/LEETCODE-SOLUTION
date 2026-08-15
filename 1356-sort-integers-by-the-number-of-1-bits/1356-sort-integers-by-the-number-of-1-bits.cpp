class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
            string c=bitset<32>(arr[i]).to_string();
            int count=0;
            for(int j=0;j<c.length();j++){
                if(c[j]=='1') count++;
            }
            m[arr[i]]=count;
        }
        sort(arr.begin(),arr.end(),[&](int a,int b){
            if(m[a]!=m[b]) return (m[a]<m[b]);
            return a<b;
        });
        return arr;
        
    }
};