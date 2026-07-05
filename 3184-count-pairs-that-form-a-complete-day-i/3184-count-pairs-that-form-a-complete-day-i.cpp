class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int count=0;
        for(int i = 0 ; i<hours.size();i++){
            int sum=0;
            for(int j = i+1; j<hours.size();j++){
                sum=hours[i]+hours[j];
                if(sum%24==0){
                    count++;
                }
            }
        }
        return count;

        
    }
};