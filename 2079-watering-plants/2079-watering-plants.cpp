class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int cp=capacity;
        int steps=0;
        for(int i=0;i<plants.size();i++){
            
            if(cp<plants[i]){
                steps+=2*i;
                cp=capacity;
            }
            cp-=plants[i];
            steps++;
        }
        return steps;
    }
};