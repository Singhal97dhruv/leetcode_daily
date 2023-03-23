class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int j=0;
        vector<int>vect;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(j;j<arr.size();j++){
            if(arr[j]>x)break;
        }
        int i=j-1;
        while(i<j && j<=arr.size()-1 && i>=0 && k>0){
            int w=abs(arr[j]-x);
            int y=abs(arr[i]-x);
            int z=min(w,y);
            if(w==y){pq.push(arr[i]);
                    i--;}
            else if(z==w){pq.push(arr[j]);
                         j++;}
            else {
                pq.push(arr[i]);
                i--;
            }
            k--;
            
        }
        while(i>=0 && k>0){
            pq.push(arr[i]);
            i--;
            k--;
        }
        while(j<=arr.size()-1 && k>0){
            pq.push(arr[j]);
            j++;
            k--;
        }
        int n=pq.size();
        for(int i=0;i<n;i++){
            vect.push_back(pq.top());
            pq.pop();
        }
        return vect;
    }
};