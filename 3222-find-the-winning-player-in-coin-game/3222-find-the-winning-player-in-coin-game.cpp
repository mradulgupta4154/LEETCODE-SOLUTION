class Solution {
public:
    string winningPlayer(int x, int y) {
        int c= min(x,y/4);
        if(c%2==0) return "Bob";
        return "Alice";
        
    }
};