class Solution {
public:
    string eq(string c){
        if(c.length()!=4){
            c=string(4-c.length(),'0')+c;
        }
        return c;
    }
    int generateKey(int num1, int num2, int num3) {
        string a=eq(to_string(num1));
        string b=eq(to_string(num2));
        string c=eq(to_string(num3));
        string ans="";
        for(int i=0;i<4;i++){
            ans+=(char)(min({a[i]-'0',b[i]-'0',c[i]-'0'})+'0');
        }
        return std::stoi(ans);   
    }
};