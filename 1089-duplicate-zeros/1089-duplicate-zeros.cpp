class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int zeros = 0;
        int n = arr.size();
        
        // Find the number of zeros that will be included within the bounds of the array
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                zeros++;
            }
        }
        
        int i = n - 1;          // Pointer for the original array end
        int j = n + zeros - 1;  // Pointer for the expanded array end
        
        // Copy elements backwards
        while (i >= 0) {
            if (arr[i] == 0) {
                // If the pointer is within bounds, write the second zero
                if (j < n) arr[j] = 0;
                j--;
                // Write the first zero
                if (j < n) arr[j] = 0;
                j--;
            } else {
                if (j < n) arr[j] = arr[i];
                j--;
            }
            i--;
        }
    }
};