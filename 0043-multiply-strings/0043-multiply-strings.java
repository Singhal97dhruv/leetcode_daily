class Solution {
    public String multiply(String num1, String num2) {
        
        int m=num1.length(),n=num2.length();
        int res[]=new int[m+n];
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                res[i+j+1]+=(num1.charAt(i)-'0')*(num2.charAt(j)-'0');
            }
        }
        int carry=0;
        for(int i=m+n-1;i>=0;i--){
            int temp=(res[i]+carry)%10;
            carry=(res[i]+carry)/10;
            res[i]=temp%10;
        }
        StringBuilder sb=new StringBuilder();
        for(int num:res)sb.append(num);
        while(sb.length()!=0 && sb.charAt(0)=='0')sb.deleteCharAt(0);
        return sb.length()==0?"0":sb.toString();
        
    }
}