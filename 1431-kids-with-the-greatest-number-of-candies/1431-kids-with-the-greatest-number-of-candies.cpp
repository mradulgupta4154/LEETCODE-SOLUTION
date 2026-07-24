class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        int n =candies.size();
        int c =*max_element(candies.begin(),candies.end());
        vector<bool>vec(n,false);
        for(int i =0;i<n;i++){
            if(candies[i]+e>=c) {
                vec[i]=true;
            }
        }
        return vec;
    }
};