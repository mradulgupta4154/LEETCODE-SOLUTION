class Solution {
public:
    string thousandSeparator(int n) {
        string c=to_string(n);
        if(c.length()<4) return c;
        else{
            for(int i=c.length()-3;i>0;i-=3){
                c.insert(i,".");
            }
        }
        return c;
        
    }
};