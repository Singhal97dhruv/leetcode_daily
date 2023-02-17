class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>vect(n,"");
        // for(int i=1;i<=n;i++){
        //     if(i%3==0 && i%5==0)vect[i-1]="FizzBuzz";
        //     else if(i%3==0)vect[i-1]="Fizz";
        //     else if(i%5==0)vect[i-1]="Buzz";
        //     else vect[i-1]=to_string(i);
        // }
        // return vect;
        for(int i=0;i<n;i++){
            vect[i]=to_string(i+1);
        }
        for(int i=3;i<=n;i=i+3)vect[i-1]="Fizz";
        for(int i=5;i<=n;i=i+5)vect[i-1]="Buzz";
        for(int i=15;i<=n;i=i+15){
            vect[i-1]="FizzBuzz";
        }
        return vect;
    }
};