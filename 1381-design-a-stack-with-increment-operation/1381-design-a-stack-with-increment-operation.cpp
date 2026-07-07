class CustomStack {
public:
    vector<int>s;
    int count=0;
    int maxSize;
    CustomStack(int maxSize) {
        this->maxSize=maxSize;
        s.resize(maxSize);
    }
    void push(int x) {
        if(count<maxSize){
            s[count]=(x);
            count++;
        }
    }   
    int pop() {
        if(count==0) return -1;
        count--;
        return s[count];
    }
    void increment(int k, int val) {
        if(count<k){
            for (int i = 0 ; i<count;i++){
                s[i]+=val;
            }
        }
        else{
            for(int i = 0 ;i<k;i++){
                s[i]+=val;
            }
        }
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */