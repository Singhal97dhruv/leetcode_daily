class BrowserHistory {
public:
    stack<string>main,temp;
    BrowserHistory(string homepage) {
        main.push(homepage);
    }
    
    void visit(string url) {
            while(!temp.empty()){
                temp.pop();
            }
            main.push(url);
    }
    
    string back(int steps) {
        while(main.size()>1 && steps--){
            string data=main.top();main.pop();
            temp.push(data);
        }
        return main.top();
    }
    
    string forward(int steps) {
        while(!temp.empty() && steps-- ){
            string data=temp.top();temp.pop();
            main.push(data);
        }
        return main.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */