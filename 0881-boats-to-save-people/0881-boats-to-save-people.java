class Solution {
    public int numRescueBoats(int[] people, int limit) {
        
        Arrays.sort(people);
        int left=0,right=people.length-1,cnt=0;
        
        while(left<=right){

            if(people[left]+people[right]<=limit){
                left++;
                right--;
                cnt++;
            }
            else{
                --right;
                cnt++;
            }
            
        }
        return cnt;
    }
}