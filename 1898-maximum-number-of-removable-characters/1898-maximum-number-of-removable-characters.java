class Solution {
    public boolean feasible(String s,String p,int[] r,int mid){
        int[] arr=new int[s.length()];
        Arrays.fill(arr,0);
        for(int i=0;i<mid;i++)arr[r[i]]=1;
        int j=0;
        for(int i=0;i<s.length();i++){
            if(arr[i]==1)continue;
            if(s.charAt(i)==p.charAt(j))j++;
            if(j>=p.length())return true;
        }
        return false;
    }
    public int maximumRemovals(String s, String p, int[] removable) {
        int left=0,right=removable.length;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(feasible(s,p,removable,mid)==true)left=mid+1;
            else right=mid-1;
        }
        return right;
    }
}