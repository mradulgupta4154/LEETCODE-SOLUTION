class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v3=nums1;
        v3.insert(v3.end(),nums2.begin(),nums2.end());
        sort(v3.begin(),v3.end());
        int n=v3.size();
        if (n%2!=0){
           double m=v3[n/2];
           return m;
        }
        else{
            double m = (v3[(n-1)/2]+v3[n/2])/2.0;
            return m;

        }


    }
};