class TimeMap {
public:
    
    unordered_map<string,vector<pair<int,string>>>map;
    
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        map[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(map.find(key)==map.end())return "";
        int left=0,right=map[key].size();
        while(left<right){
            int mid=left+(right-left)/2;
            if(map[key][mid].first>timestamp)right=mid;
            else left=mid+1;
        }
        return left>0 && left<=map[key].size()?map[key][left-1].second:"";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */