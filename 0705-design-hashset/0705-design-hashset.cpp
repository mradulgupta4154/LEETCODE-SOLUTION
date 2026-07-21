class MyHashSet {
public:
    vector<int>vec;
    MyHashSet() {   
    }
    bool contains(int key) {
        if(find(vec.begin(),vec.end(),key)!=vec.end()){
            return true;
        }
        return false;  
    }
    void add(int key) {
        if(!contains(key)){
           vec.push_back(key);
        }
    }
    void remove(int key) {
        for(int i =0;i<vec.size();i++){
            if(vec[i]==key){
                vec.erase(vec.begin()+i);
                break;
            }
        }
    }

};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */