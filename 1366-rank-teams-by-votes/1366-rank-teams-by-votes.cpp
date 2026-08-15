class Solution {
public:
    string rankTeams(vector<string>& votes) {
        unordered_map<char,vector<int>>m;
        int numTeams=votes[0].size();
        for(int i =0 ;i<votes.size();i++){
            for(int j=0;j<votes[i].size();j++){
                char c =votes[i][j];
                if(m.find(c)==m.end()) m[c]=vector<int>(numTeams,0);
                m[c][j]++;
            }        
        }
        string teams = votes[0];
        sort(teams.begin(), teams.end(), [&](char a, char b){
            for (int pos = 0; pos < numTeams; pos++) {
                if (m[a][pos] != m[b][pos])
                    return m[a][pos] > m[b][pos];
            }
            return a < b;  
        });

        return teams;
        
    }
};