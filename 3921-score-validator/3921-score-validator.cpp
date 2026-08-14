class Solution {
public:
    vector<int> scoreValidator(vector<string>& e) {
        int counter=0 , score=0;
        for(int i = 0;i<e.size() and counter<10 ;i++){
            if(e[i]=="W") counter++;
            else if(e[i]=="WD" or e[i]=="NB") score++; 
            else{
                score+=std::stoi(e[i]);
            }
        }
        vector<int>vec={score,counter};
        return vec;
        
    }
};