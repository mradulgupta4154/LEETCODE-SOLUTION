class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0;
        int i = num1.size()-1;
        int j = num2.size()-1;
        string c= "";
        while(i>=0 or j>=0 or carry!=0){
            int d =(i>=0)?num1[i]-'0':0;
            int e =(j>=0)?num2[j]-'0':0;
            int sum =d+e+carry;
            carry = sum/10;
            c+=to_string(sum%10);
            i--;
            j--;
        }
        reverse(c.begin(),c.end());
        return c;
    }
};