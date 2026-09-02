class Solution {
public:
    int size(string a){
        string c="";
        for(int i=0;i<a.length();i++){
            c+=to_string((int)(a[i]-97));
        }
        return stoi(c);
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int a=size(firstWord);
        int b=size(secondWord);
        int c=size(targetWord);
        return a+b==c;
        
        
    }
};