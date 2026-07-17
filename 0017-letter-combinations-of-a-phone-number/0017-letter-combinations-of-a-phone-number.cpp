class Solution {
public:
    void back(int i , string& digits, unordered_map<int,string>& m,string& ch,vector<string>& vec){
        if(i==digits.length()){
            vec.push_back(ch);
            return;
        }
        string lett=m[digits[i]-'0'];
        for(char c:lett){
            ch.push_back(c);
            back(i+1,digits,m,ch,vec);
            ch.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>vec;
        unordered_map<int,string>m;
        string ch="";
        m[2]+='a',m[3]+='d';
        m[2]+='b',m[3]+='e';
        m[2]+='c',m[3]+='f';
        m[4]+='g',m[5]+='j';
        m[4]+='h',m[5]+='k';
        m[4]+='i',m[5]+='l';
        m[6]+='m',m[7]+='p';
        m[6]+='n',m[7]+='q';
        m[6]+='o',m[7]+='r';
        m[8]+='t',m[7]+='s';
        m[8]+='u',m[9]+='w',m[9]+='y';
        m[8]+='v',m[9]+='x',m[9]+='z';
        if(digits.empty()) return vec;
        back(0,digits,m,ch,vec);
        return vec;
    }
   
};