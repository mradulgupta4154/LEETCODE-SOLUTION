class ProductOfNumbers {
public:
    vector<int>vec;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        vec.push_back(num);
        
    }
    
    int getProduct(int k) {
        int a=1;
        while(k--){
            a*=vec[vec.size()-1-k];

        }
        return a;
        
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */