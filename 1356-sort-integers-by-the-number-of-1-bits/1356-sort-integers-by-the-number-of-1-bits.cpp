class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[](int &a,int &b){
            int A=__builtin_popcount(a),B=__builtin_popcount(b);
            return A==B?a<b:A<B;
        });
        return arr;
    }
};