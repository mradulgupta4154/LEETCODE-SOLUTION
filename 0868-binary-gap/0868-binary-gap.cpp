class Solution {
public:
    int binaryGap(int n) {
        string c =bitset<32>(n).to_string();
        int maxcount=0;
        for(int i=0;i<c.length();i++){
            if(c[i]=='1'){
                int count=0;
                bool foundnext=false;
                for(int j=i+1;j<c.length();j++){
                    if(c[j]=='1'){
                        foundnext=true;
                        break;

                    }
                    else{
                        count++;
                    }
                }
                if(foundnext) maxcount=max(count+1,maxcount);
            }
        }
        return maxcount;
        
    }
};