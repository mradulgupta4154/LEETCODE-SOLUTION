class MyCalendarThree {
    map<int,int> m;
public:
    MyCalendarThree() {   
    }
    int book(int start, int end) {
        m[start]++;
        m[end]--;
        int o =0,k=0;
        for(pair<int,int>t:m){
            k=max(k,o+=t.second);
        }
        return k;
        
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */