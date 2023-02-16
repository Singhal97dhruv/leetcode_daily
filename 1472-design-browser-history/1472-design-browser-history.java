class BrowserHistory {
    String[] arr=new String[5000];
    int prev,curr;
    public BrowserHistory(String homepage) {
            prev=0;curr=0;
        arr[0]=homepage;
    }
    
    public void visit(String url) {
        arr[++prev]=url;curr=prev;
    }
    
    public String back(int steps) {
        prev=Math.max(prev-steps,0);
        return arr[prev];
    }
    
    public String forward(int steps) {
        prev=Math.min(curr,steps+prev);
        return arr[prev];
    }
}

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory obj = new BrowserHistory(homepage);
 * obj.visit(url);
 * String param_2 = obj.back(steps);
 * String param_3 = obj.forward(steps);
 */