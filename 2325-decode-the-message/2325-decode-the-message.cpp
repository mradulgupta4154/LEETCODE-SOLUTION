class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char , char>m;
        string d="abcdefghijklmnopqrstuvwxyz";
        int idx=0;
        string ans="";
        for(int i = 0 ;i<key.length();i++){
            if(key[i] == ' ') continue;
            if(m.find(key[i])==m.end()){
                m[key[i]]=d[idx];
                idx++;
            }
        }
        for(int i=0 ;i<message.length();i++){
            if(message[i] == ' ') ans+=' ';
            else ans+=m[message[i]];
        }
        return ans;
        
    }
};