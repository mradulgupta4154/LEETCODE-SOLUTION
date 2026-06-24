#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack <char> w ;
        for(char c : s ){
            if (c=='('  or c=='[' or c=='{' ){
                w.push(c);
            }else{
                if (w.empty()) return false;
                if (c==')' and w.top()!='(') return false;
                if (c==']' and w.top()!='[') return false;
                if (c=='}' and w.top()!='{') return false;
                w.pop();
            }
        }
        return w.empty();
        
    }
};