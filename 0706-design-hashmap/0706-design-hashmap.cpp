class MyHashMap {
public:
    vector<vector<int>>vec;
    MyHashMap() {
    }
    int get(int key) {
        for(int i =0 ;i<vec.size();i++){
            if(vec[i][0]==key) return vec[i][1];
        }
        return -1;
    }
    void put(int key, int value) {
        if(get(key)!=-1){
            for(auto&pair:vec){
              if(pair[0]==key){
                pair[1]=value;
                return;
              }
            }
        }
        else{
            vec.push_back({key,value});
        }
    }
    void remove(int key) {
        for(int i =0 ;i<vec.size();i++){
            if(vec[i][0]==key){;
               vec.erase(vec.begin()+i);
            }
        }

        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */