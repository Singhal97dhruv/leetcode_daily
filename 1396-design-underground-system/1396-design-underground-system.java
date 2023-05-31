class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>>map1;
    unordered_map<string,pair<double,int>>map2;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        map1[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto check=map1[id];
        map1.erase(id);
        string traname=check.first+"_"+stationName;
        map2[traname].first+=t-check.second;
        map2[traname].second++;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string route=startStation+"_"+endStation;
        auto&p=map2[route];
        return p.first/p.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */