class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int sum = 0 ;
        for (int i = 0 ; i<o.size() ; i++){
            if(o[i]=="--X" or o[i]=="X--"){
                sum--;
            }
            else{
                sum++;
            }
        }
        return sum;
        
    }
};