class Solution {
public:
    int passwordStrength(string p) {
        string e ="abcdefghijklmnopqrstuvwxyz";
        string f="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string g ="0123456789";
        set<char>a(e.begin(),e.end());
        set<char>b(f.begin(),f.end());
        set<char>c(g.begin(),g.end());
        int sum=0;
        set<char>s(p.begin(),p.end());
        string ch="";
        for( const auto& elem : s){
            ch+=elem;
        }
        for(int i =0 ;i<ch.size();i++){
            if(a.contains(ch[i])){
                sum+=1;
            }
            else if(b.contains(ch[i])){
                sum+=2;
            }
            else if(c.contains(ch[i])){
                sum+=3;
            }
            else{
                sum+=5;
            }
        }
        return sum;
    }
};