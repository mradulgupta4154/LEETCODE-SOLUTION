class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        int n = bits.size();
        
        while (i < n - 1) {
            if (bits[i] == 1) {
                i += 2; // 2-bit character consumes 2 elements
            } else {
                i += 1; // 1-bit character consumes 1 element
            }
        }
        
        // If we stopped exactly at the last element, it's a 1-bit character
        return i == n - 1;
    }
};