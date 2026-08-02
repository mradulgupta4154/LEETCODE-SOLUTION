class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i =left;i<=right;i++){
            int n =words[i].size()-1;
            if((words[i][0]=='a' or words[i][0]=='e' or words[i][0]=='i' or words[i][0]=='o' or words[i][0]=='u') and (words[i][n]=='a' or words[i][n]=='e' or words[i][n]=='i' or words[i][n]=='o' or words[i][n]=='u')) count++;
        }
        return count;
        
    }
};