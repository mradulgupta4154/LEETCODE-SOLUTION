class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        unordered_map<char,int>m;
        string c ="abcdefghijklmnopqrstuvwxyz";
        for(int i = 0 ;i<c.length();i++){
            m[c[i]]=score[i];
        }
        unordered_map<char,int> avail;
        for(char ch:letters) avail[ch]++;
        int maxi= INT_MIN;
        solve(0,words,m,avail,0,maxi);
        return maxi;
    }
    void solve(int idx,vector<string>&words,unordered_map<char,int>&m,unordered_map<char,int>avail,int currscore,int&maxi){
        if(idx==words.size()){
            maxi=max(maxi,currscore);
            return;
        }
        solve(idx+1,words,m,avail,currscore,maxi);
        unordered_map<char,int>temp=avail;
        int sum =0 ;
        bool canForm =true;
        for(int j = 0 ;j<words[idx].length();j++){
            char ch=words[idx][j];
            temp[ch]--;
            sum+=m[ch];
            if(temp[ch]<0)canForm=false;
        }
        if(canForm){
            solve(idx+1,words,m,temp,currscore+sum,maxi);
        }
    }
};