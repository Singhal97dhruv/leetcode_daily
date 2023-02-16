class BrowserHistory {
public:
    string st[5000];
    int prev=0,curr=0;
    BrowserHistory(string homepage) {
        st[curr]=homepage;
        
    }
    
    void visit(string url) {
        st[++prev]=url;curr=prev;
    }
    
    string back(int steps) {
        prev=max(prev-steps,0);
        return st[prev];
    }
    
    string forward(int steps) {
         prev=min(prev+steps,curr);
        return st[prev];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */