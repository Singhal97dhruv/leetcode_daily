There is a forest with an unknown number of rabbits. We asked n rabbits "How many rabbits have the same color as you?" and collected the answers in an integer array answers where answers[i] is the answer of the ith rabbit.

Given the array answers, return the minimum number of rabbits that could be in the forest.

 


class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>map;
        int count=0;
        for(int i=0;i<answers.size();i++){
            if(map[answers[i]]==0){
                count+=answers[i]+1;
                map[answers[i]]=answers[i];
            }
            else{
                map[answers[i]]--;
            }
            
        }
 return count;
    }

};
