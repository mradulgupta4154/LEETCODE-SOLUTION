class Solution {
public:
    int vowel(string a){
        vector<int>vec{'a','e','i','o','u','A','E','I','O','U'};
        int count=0;
        for(int i=0;i<a.length();i++){
            if(find(vec.begin(),vec.end(),a[i])!=vec.end()) count++;
        }
        return count;
    }
    bool halvesAreAlike(string s) {
        string a =s.substr(0,s.length()/2);
        string b=s.substr(s.length()/2,s.length());
        return vowel(a)==vowel(b);
        
    }
};