class Solution {
public:
    int maxAdjacentDistance(vector<int>& arr) {
        int d=0;
        for(int i=0;i<arr.size()-1;i++){
            d=max(d,abs(arr[i]-arr[i+1]));
        }
        return max(d,abs(arr[0]-arr[arr.size()-1]));
        
    }
};