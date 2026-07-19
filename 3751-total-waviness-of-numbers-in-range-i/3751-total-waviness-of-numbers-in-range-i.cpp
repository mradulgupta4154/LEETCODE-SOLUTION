class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count=0;
        for(int i=num1 ;i<=num2;i++){
            vector<int>vec;
            int n =i;
            while(n>0){
                int d =n%10;
                n/=10;
                vec.push_back(d);
                
            }
            if (vec.size()<3) continue;
            for(int j = 1 ;j<vec.size()-1;j++){
                if((vec[j]<vec[j-1] and vec[j]<vec[j+1]) or (vec[j]>vec[j-1] and vec[j]>vec[j+1])) count++; 
                
            }
        }
        return count;
    }
};