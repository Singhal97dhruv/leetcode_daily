class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n=arr.size(),res=0;
        vector<int>temp;
        temp.push_back(0);
        for(int i=0;i<arr.size();i++){
            temp.push_back(arr[i]^temp[i]);
            // arr[i]^=arr[i-1];
        }
       for(int i=0;i<n-1;i++){
           // int Xor=arr[i];
           for(int k=i+1;k<n;k++){
               for(int j=i+1;j<=k;j++){
                   if(temp[j]^temp[i]==temp[k+1]^temp[j])res++;
               }
           }
       } 
        return res;
        
        
        
        
    }
};