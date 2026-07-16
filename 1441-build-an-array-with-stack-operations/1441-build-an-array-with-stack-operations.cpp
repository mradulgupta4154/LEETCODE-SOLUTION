class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>vec;
        for(int i = 1,j=0 ; i<=n and j<target.size();i++){
            vec.push_back("Push");
            if(target[j]==i){
                j++;  
            }
            else{
                vec.push_back("Pop");
            }
        }
        return vec;
    }
};