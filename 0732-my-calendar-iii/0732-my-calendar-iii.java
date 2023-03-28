class MyCalendarThree {

    Map<Integer,Integer>map=new TreeMap<>();
    public MyCalendarThree() {
        
    }
    
    public int book(int startTime, int endTime) {
        
        map.put(startTime,map.getOrDefault(startTime,0)+1);
        map.put(endTime,map.getOrDefault(endTime,0)-1);
        int res=0,sum=0;
        for(int i:map.values()){
            sum+=i;
            res=Math.max(res,sum);
        }
        return res;
    }
}

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree obj = new MyCalendarThree();
 * int param_1 = obj.book(startTime,endTime);
 */