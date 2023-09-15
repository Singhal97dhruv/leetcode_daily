class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        
        deque<string>dq1,dq2;
        stringstream ss(sentence1),ss1(sentence2);
        string s;
        while(ss>>s){
            dq1.push_back(s);
        }
        while(ss1>>s){
            dq2.push_back(s);
        }
        
        while(!dq1.empty() && !dq2.empty() && dq1.front()==dq2.front()){dq1.pop_front();dq2.pop_front();}
        while(!dq1.empty() && !dq2.empty() && dq1.back()==dq2.back()){dq1.pop_back();dq2.pop_back();}
        
        return dq1.empty()||dq2.empty();
        
    }
};