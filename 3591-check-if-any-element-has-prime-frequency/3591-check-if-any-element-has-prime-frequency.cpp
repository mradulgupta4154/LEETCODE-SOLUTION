class Solution {
public:
    vector<int> prime(int n){
        vector<int>vec;
        for(int i =2;i<n;i++){
            bool isprime=true;
            for(int j =2 ;j<i;j++){
                if(i%j ==0){
                    isprime=false;
                    break;
                }
            }
            if(isprime) vec.push_back(i);
            
        }
        return vec;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        vector<int>vec=prime(100);
        unordered_map<int,int>m;
        for(int i =0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto&[num,count]:m){
            if(find(vec.begin(),vec.end(),count)!=vec.end()) return true;
        }
        return false;
        
    }
};