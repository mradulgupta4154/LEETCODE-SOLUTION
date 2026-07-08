class Solution {
public:
    int myAtoi(string s) {
        string c="";
        bool start = false;
        for(int i = 0 ; i<s.length();i++){
            if(s[i]==' '){
                if (start) break;
                else continue;
            }
            else if (isdigit(s[i])){
                c+=s[i];
                start=true;
            }
            else if((s[i]=='+' or s[i]=='-') and c.empty()){
                c+=s[i];
                start=true;
            }
            else{
                break;
            }
        }
        if (c.empty() or c=="+" or c=="-") return 0;
        try{
            long long result =std::stoll(c);
            if(result>INT_MAX) return INT_MAX;
            if(result<INT_MIN) return INT_MIN;
            return (int)result;
        }catch(const std::out_of_range&){
            return (c[0]=='-')?INT_MIN:INT_MAX;
        } 
    }
};