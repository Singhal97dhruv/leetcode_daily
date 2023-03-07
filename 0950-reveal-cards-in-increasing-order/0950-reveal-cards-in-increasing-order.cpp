class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int>q;
        int n=deck.size();
        vector<int>res(n,0);
        sort(deck.begin(),deck.end());
        for(int i=0;i<n;i++){
            q.push(i);
        }
       for(int i=0;i<n;i++){
           res[q.front()]=deck[i];q.pop();
           q.push(q.front());q.pop();
           
       }
        return res;
    }
};