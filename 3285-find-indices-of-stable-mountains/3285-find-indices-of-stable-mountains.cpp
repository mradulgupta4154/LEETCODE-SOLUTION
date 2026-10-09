class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int th) {
        vector<int>vec;
        for(int i=0;i<height.size()-1;i++){
            if(height[i]>th){
                vec.push_back(i+1);
            }
        }
        return vec;
    }
};