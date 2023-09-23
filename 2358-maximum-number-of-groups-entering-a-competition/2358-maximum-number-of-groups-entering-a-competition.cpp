class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        
//         sort(grades.begin(),grades.end());
       
//         int prevCnt=-1,prevScore=0;
//          int score=0,cnt=0,grp=0;
//         for(int i=0;i<grades.size();i++){

//             score+=grades[i];
//             cnt++;
//             if(cnt>prevCnt && score>prevScore){
//                 grp++;
//                 prevCnt=cnt;
//                 prevScore =score;
//                 cnt=score=0;
//             }
            
//         }
//         return grp;
        
        
//         int grps=0,temp=0;

//         while(temp<=grades.size()){
//             temp+=++grps;
//         }
//         return grps-1;
        
        
        int D=sqrt(1+8*grades.size());
        int B=-1;
        return (B+D)/2;
        
    }
};