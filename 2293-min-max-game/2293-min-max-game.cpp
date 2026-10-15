class Solution {
public:
    int minMaxGame(vector<int>& a) {
    for(int n= size(a); n>1 ; n-=(n/2)){
        for(int i=0;i<n/2;i++) 
		    a[i]= (i%2)==1? max(a[2 * i], a[2 * i + 1]) : min(a[2 * i], a[2 * i + 1]);   
    }
    return a[0];
}
};