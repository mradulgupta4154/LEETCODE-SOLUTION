class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        vector<int> ranges(n);
        int maxrange=-1;
        for(int i =0 ;i<nums.size();i++){
            int largest=0 , smallest=9;
            int count=0 , num =nums[i];
            while(num>0){
                int d=num%10;
                largest=max(d,largest);
                smallest=min(smallest,d);
                num/=10;
            }
            ranges[i] = largest-smallest;
            maxrange=max(maxrange,ranges[i]);
        }
        int final=0;
        for(int i = 0 ; i<n;i++){
            if(ranges[i]==maxrange) final+=nums[i];
        }
        return final;  
    }
};