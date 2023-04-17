class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
         List<Boolean> ans = new ArrayList<>(candies.length);
        int mx = 0;
        for (int candy : candies) {
            mx = Math.max(candy, mx);
        }
        for (int candy : candies) {
            ans.add(candy + extraCandies >= mx);
        }
        return ans;
    }
}