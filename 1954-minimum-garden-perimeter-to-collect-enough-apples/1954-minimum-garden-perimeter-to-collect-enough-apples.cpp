class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long i=1;
        for(;neededApples>0;i++){
            neededApples-= 3*i*4;
            neededApples-=((2*i*(2*i-1)/2)-(i*(i+1)/2))*8;
        }
        return (i-1)*8;
    }
};