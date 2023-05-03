class Solution {
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        List<List<Integer>>res=new ArrayList<>();
        List<Integer>l1=new ArrayList<>();
        List<Integer>l2=new ArrayList<>();
        Set<Integer>setA=new HashSet<Integer>();
        Set<Integer>setB=new HashSet<Integer>();
        for(int i:nums1)setA.add(i);
        for(int i:nums2)setB.add(i);
        
        for(int i:setA){
            if(setB.contains(i)==false)l1.add(i);
        }
        for(int i:setB){
            if(setA.contains(i)==false)l2.add(i);
        }
        res.add(l1);
        res.add(l2);
        return res;

    }
}