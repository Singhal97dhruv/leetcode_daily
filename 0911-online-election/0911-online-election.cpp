class TopVotedCandidate {
public:
    unordered_map<int,int>map;
    vector<int>temp;
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        int lead=-1;
        temp=times;
        unordered_map<int,int>cnt;
        
        for(int i=0;i<persons.size();i++){
            lead=++cnt[persons[i]]>=cnt[lead]?persons[i]:lead;
            map[times[i]]=lead;
        }
        
    }
    
    int q(int t) {
        return map[*--upper_bound(temp.begin(),temp.end(),t)];
    }
};

/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate* obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj->q(t);
 */