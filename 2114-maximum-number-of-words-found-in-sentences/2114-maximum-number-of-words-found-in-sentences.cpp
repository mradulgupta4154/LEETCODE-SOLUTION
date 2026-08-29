class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int maxi=0;
        for(int i=0;i<s.size();i++){
            int count=0;
            for(int j=0;j<s[i].size();j++){
                if(s[i][j]==' ') count++;
            }
            maxi=max(count,maxi);
        }
        return maxi+1;
        
    }
};