class Solution {
public:
    string removeDigit(string number, char digit) {
        string c="";
        for(int i=0;i<number.length();i++){
            if(number[i]!=digit) continue;
            string s=number.substr(0,i)+number.substr(i+1);
            if(s>c) c=s;


        }
        return c;
        
    }
};