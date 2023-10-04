class Solution {
public:
    int dp[71][70 * 70 + 1] = {[0 ... 70][0 ... 70 * 70] = INT_MAX};
int dfs(vector<set<int>>& m, int i, int sum, int target) {
    if (i >= m.size())
        return abs(sum - target);
    if (dp[i][sum] == INT_MAX)
        for (auto it = begin(m[i]); it != end(m[i]); ++it) {
            dp[i][sum] = min(dp[i][sum], dfs(m, i + 1, sum + *it, target));
            if (dp[i][sum] == 0 || sum + *it > target)
                break;
        }
    return dp[i][sum];
}
    
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
       vector<set<int>> m;
    for (auto &row : mat)
        m.push_back(set<int>(begin(row), end(row)));
    return dfs(m, 0, 0, target);
    }
};