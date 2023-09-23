class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        
        sort(grades.begin(),grades.end());
       
        int prevCnt=-1,prevScore=0;
         int score=0,cnt=0,grp=0;
        for(int i=0;i<grades.size();i++){

            score+=grades[i];
            cnt++;
            if(cnt>prevCnt && score>prevScore){
                grp++;
                prevCnt=cnt;
                prevScore =score;
                cnt=score=0;
            }
            
        }
        return grp;
        
        
    }
};