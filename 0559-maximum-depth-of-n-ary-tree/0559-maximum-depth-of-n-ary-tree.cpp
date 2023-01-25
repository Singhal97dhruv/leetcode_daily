/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
//     int cnt=0;
//     void dfs(Node*t,int temp_h){
//         if(t==NULL)return;
//         temp_h+=1;
//         cnt=max(temp_h,cnt);
//         for(auto v:t->children){
//             dfs(v,temp_h);
//         }
//     }
    
    int maxDepth(Node* root) {
        // dfs(root,0);
        // return cnt;
        if(!root)return 0;
        int height=0;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            height++;
          for(int i=0;i<n;i++){
                Node*t=q.front();q.pop();
              for(auto v:t->children){
                  q.push(v);
              }
            }
        }
        return height;
        
        
    }
};