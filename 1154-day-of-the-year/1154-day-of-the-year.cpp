class Solution {
public:
    int dayOfYear(string date) {
        vector<int>d{31,28,31,30,31,30,31,31,30,31,30,31};
        string c=date.substr(5,2);
        string f=date.substr(8,2);
        string b=date.substr(0,4);
        int e=0;
        for(int i=0;i<stoi(c)-1;i++){
            e+=d[i];
        }
        if (((stoi(b) % 4 == 0 && stoi(b) % 100 != 0) || stoi(b) % 400 == 0) && stoi(c) > 2) e += 1;
        return e+stoi(f);
        
    }
};