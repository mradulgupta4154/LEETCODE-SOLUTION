class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>vec;
        for(int i =0;i<nums.size();i++){
            vec.push_back(nums[i]);
            while(vec.size()>1){
                int a =vec.back();
                vec.pop_back();
                int b =vec.back();
                int g=gcd(a,b);
                if(g==1){
                    vec.push_back(a);
                    break;
                }
                else{
                    vec.pop_back();
                    long long m=(long long)a/g*b;
                    vec.push_back(m);
                }
            }
        }
        return vec;
    }
};