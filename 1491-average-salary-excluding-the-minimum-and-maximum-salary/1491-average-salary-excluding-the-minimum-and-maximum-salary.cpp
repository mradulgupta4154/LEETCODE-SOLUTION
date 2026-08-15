class Solution {
public:
    double average(vector<int>& s) {
        int c =*max_element(s.begin(),s.end());
        int d =*min_element(s.begin(),s.end());
        double sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==c or s[i]==d) continue;
            else sum+=s[i];
        }
        return sum/(s.size()-2);
        
    }
};