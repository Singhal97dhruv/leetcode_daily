class Solution {
    public int combine(int x,int y,char c){
        if(c=='+')return x+y;
        else if(c=='-')return x-y;
        return x*y;
    }
    public List<Integer> diffWaysToCompute(String expression) {
        
        List<Integer>res=new ArrayList<>();
        
        boolean isNumber=true;
        
        for(int i=0;i<expression.length();i++)
        {
            if(!Character.isDigit(expression.charAt(i))){
                isNumber=false;
                
                List<Integer>left=diffWaysToCompute(expression.substring(0,i));
                List<Integer>right=diffWaysToCompute(expression.substring(i+1));
                
                for(int x:left){
                    for(int y:right){
                        res.add(combine(x,y,expression.charAt(i)));
                    }
                }
            }
        }
        if(isNumber)res.add(Integer.valueOf(expression));
        return res;
        
    }
}