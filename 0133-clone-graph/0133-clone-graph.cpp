/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    
    // unordered_map<Node*,Node*>map;
    
    Node* cloneGraph(Node* node) {
if(!node){
    return NULL;
}        
//         Node*copy=new Node(node->val,{});
//         copies[node]=copy;
//         queue<Node*>todo;
//         todo.push(node);
//         while(!todo.empty()){
//             Node*cur=todo.front();
//             todo.pop();
//             for(Node*neighbor:cur->neighbors){
//                 if(copies.find(neighbor)==copies.end()){
//                     copies[neighbor]=new Node(neighbor->val,{});
//                     todo.push(neighbor);
//                 }
//             copies[cur]->neighbors.push_back(copies[neighbor]);
//             }
//         }
//         return copy;
        
//         Node*dup=new Node(node->val);
        
//         copies[node]=dup;
//         queue<Node*>q;
//         q.push(node);
//         while(!q.empty()){
//             Node*temp=q.front();q.pop();
//             for(Node*v:temp->neighbors){
//                 if(copies.find(v)==copies.end()){
//                     copies[v]=new Node(v->val,{});
//                     q.push(v);
//                 }
//                 copies[temp]->neighbors.push_back(copies[v]);
//             }
//         }
        
//         return dup;
        
        Node*t=new Node(node->val);
        
        copies[node]=t;
        queue<Node*>q;
        q.push(node);
        while(!q.empty()){
            Node*temp=q.front();q.pop();
            for(Node*v:temp->neighbors){
                if(copies.find(v)==copies.end()){
                    copies[v]=new Node(v->val);
                    q.push(v);
                }
                copies[temp]->neighbors.push_back(copies[v]);
            }
        }
        return t;
    }
private:
    unordered_map<Node*,Node*>copies;
};