class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
     int i,temp=0,flag=0;
        stack<int>s;
        for(int j:popped){
            if(!s.empty() &&j==s.top()){
                s.pop();
            }
            else{flag=0;
            for(i=temp;i<pushed.size();i++){
                if(pushed[i]==j)
                {
                    flag=1;
                    i++;
                    break;
                }
                s.push(pushed[i]);
            }
                 temp=i;
            if(flag==0)return false;
            
            }
            
        }
        // if(s.empty())return true;
        // return false;
        return true;
    }
};