class Solution {
    public int[] separateDigits(int[] nums) {
        ArrayList<Integer>arr=new ArrayList();
        LinkedList<Integer>st=new LinkedList();
        for(int i=0;i<nums.length;i++){
            if(nums[i]>9){
                int n=nums[i];
                while(n>0){
                    st.push(n%10);
                    n/=10;
                }
                while(!st.isEmpty()){
                    arr.add(st.pop());
                }
            }
            else arr.add(nums[i]);
        }
        int[] ans=new int[arr.size()];
        for(int i=0;i<arr.size();i++)ans[i]=arr.get(i);
        return ans;
    }
}