class Solution {
public:
    string reformatDate(string d) {
        vector<string> vec = {"Jan","Feb","Mar","Apr","May","Jun",
                               "Jul","Aug","Sep","Oct","Nov","Dec"};

        int sp1 = d.find(' ');           
        int sp2 = d.find(' ', sp1 + 1); 

        string c = d.substr(0, sp1 - 2);    
        string b = d.substr(sp1 + 1, sp2 - sp1 - 1); 
        string a = d.substr(sp2 + 1);        

        if (c.length() < 2) c = "0" + c;  

        int f = 1;
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] == b) f = i + 1;
        }
        string month = to_string(f);
        if (month.length() < 2) month = "0" + month;  

        return (a + '-' + month + '-' + c);
    }
};