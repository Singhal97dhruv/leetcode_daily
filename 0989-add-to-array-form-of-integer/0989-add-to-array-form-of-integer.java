class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int size=num.size()-1;
        vector<int>res;
        while(size>=0 && k>0){
            
            num[size]+=k;
            k=num[size]/10;
            num[size]%=10;
            
          
            size--;
        }
        while(k>0){
            num.emplace(num.begin(),k%10);
            k/=10;
        }
        
        return num;
        
    }
};