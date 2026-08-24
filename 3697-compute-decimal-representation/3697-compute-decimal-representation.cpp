class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>vec;
        int i=0;
        while(n>0){
            int d=n%10;
            if(d!=0) vec.push_back(d*pow(10,i));            
            n/=10;
            i++;
        }
        reverse(vec.begin(),vec.end());
        return vec;
        
    }
};