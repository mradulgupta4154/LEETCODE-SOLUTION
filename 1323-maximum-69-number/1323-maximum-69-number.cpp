class Solution {
public:
    int maximum69Number (int num) {
        string c = to_string(num);
        for(int i = 0 ;i<c.length();i++){
            if(c[i]=='6'){
                c[i]='9';
                break;
            }
        }  
        return stoi(c);      
    }
};