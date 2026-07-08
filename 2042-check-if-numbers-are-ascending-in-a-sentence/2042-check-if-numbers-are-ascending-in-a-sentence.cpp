class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>vec;
        for(int i = 0 ; i<s.length();i++){
            if(isdigit(s[i])){
                int num = 0 ;
                while(i<s.length() and isdigit(s[i])){
                    num=num*10+s[i]-'0';
                    i++;
                }
                vec.push_back(num);
                i--;
            }
        }
        for(int j = 0 ; j<vec.size()-1;j++){
            if(vec[j]>=vec[j+1]){
                return false;
            }
        }
        return true;
        
    }
};