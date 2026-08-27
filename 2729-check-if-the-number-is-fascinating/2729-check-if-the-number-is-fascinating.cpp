class Solution {
public:
    bool isFascinating(int n) {
        string s= "";
        s=to_string(2*n)+to_string(3*n)+to_string(n);
        if(s.find(to_string(0))!=string::npos) return false;
        if(s.length()!=9) return false;
        for(int i = 1 ; i<10;i++){
            if(s.find(to_string(i))==string::npos){
                return false;
            }
        }
        return true;
        
    }
};