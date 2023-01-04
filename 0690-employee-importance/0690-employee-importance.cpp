/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int sum=0;
    // void dfs(unordered_map<int,Employee*>&map,int id){
    //     sum+=map[id]->importance;
    //     for(auto e:map[id]->subordinates){
    //         // sum+=e->importance;
    //         dfs(map,e);
    //     }
    // }
    
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int,Employee*>map;
        for(auto e:employees)map[e->id]=e;
        
        queue<int>q;
        q.push(id);
        while(!q.empty()){
            
            int n=q.size();
            for(int i=0;i<n;i++){
            int top=q.front();
            q.pop();
                sum+=map[top]->importance;
                for(int j:map[top]->subordinates){
                    q.push(j);
                }
                
            }
        }
        
        // dfs(map,id);
        return sum;
        
        
    }
};