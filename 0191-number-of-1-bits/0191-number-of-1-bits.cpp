#include<bitset>
#include<string>
using namespace std;
class Solution {
public:
    int hammingWeight(int n) {
        string s =bitset<32>(n).to_string();
        int count=0;
        for(int i =0;i<s.length();i++){
            if(s[i]=='1') count++;
        }
        return count;
        
    }
};