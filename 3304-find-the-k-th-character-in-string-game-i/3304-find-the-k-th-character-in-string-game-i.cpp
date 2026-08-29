class Solution {
public:
    char kthCharacter(int k) {
        string ans="a";
        while(ans.length()<k){
            int len = ans.length(); 
            for(int i=0;i<len;i++){
                ans+=char(ans[i]+1);
            }
        }
        return ans[k-1];
        
    }
};