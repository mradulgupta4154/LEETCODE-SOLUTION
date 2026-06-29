class MedianFinder {
public:
    vector<double> vec;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        auto it =lower_bound(vec.begin(),vec.end(),num);
        vec.insert(it,num);
    }
    
    double findMedian() {
        int n= vec.size();
        if (vec.size()%2!=0){
            return vec[(n)/2];
        }
        else{ 
            return (vec[n/2-1] + vec[n/2])/2.0;

        }
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */