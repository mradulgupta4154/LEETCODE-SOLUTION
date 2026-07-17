class RideSharingSystem {
public:
    queue<int>rider;
    queue<int>driver;
    unordered_map<int,int>rideract;
    unordered_map<int,int>cancelled;
    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        rider.push(riderId);
        rideract[riderId]++;
    }
    
    void addDriver(int driverId) {
        driver.push(driverId);
        
    }
    void cancelRider(int riderId) {
        if(rideract[riderId]>0){
            rideract[riderId]--;
            cancelled[riderId]++;
        }
    }
    
    vector<int> matchDriverWithRider() {
        vector<int>vec;
        while(!rider.empty() and cancelled[rider.front()]>0){
            cancelled[rider.front()]--;
            rider.pop();
        }
        if(driver.empty() or rider.empty()){
            vec.push_back(-1);
            vec.push_back(-1);
        }else{
            vec.push_back(driver.front());
            vec.push_back(rider.front());
            driver.pop();
            rider.pop();
        }
        return vec;
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */