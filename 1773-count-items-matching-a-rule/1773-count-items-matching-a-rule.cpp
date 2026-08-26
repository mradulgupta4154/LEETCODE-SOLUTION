class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        int c=0;
        for(int i=0;i<items.size();i++){

            if(ruleKey=="type") c=0;
            else if(ruleKey=="color") c=1;
            else c=2;
            if(items[i][c]==ruleValue) count++;
        }
        return count;
        
    }
};