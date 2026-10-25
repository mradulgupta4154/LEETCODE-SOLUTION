class Solution {
public:
    int encrypt(int a){
        string c=to_string(a);
        int e=c.length();
        string f="";
        int maxi=0;
        while(a>0){
            int d=a%10;
            maxi=max(maxi,d);
            a/=10;
        }
        for(int i=0;i<e;i++){
            f+=to_string(maxi);
        }
        return stoi(f);
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=encrypt(nums[i]);
        }
        return sum;
    }
};