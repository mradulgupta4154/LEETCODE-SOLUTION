#include <vector>
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>vec;
        for(int i =0 ; i<words.size();i++){
            for(int c = 0 ; c<words[i].size();c++){
                if(x == words[i][c]){
                    vec.push_back(i);
                    break;

                }
            }
        }
        return vec;
        
    }
};