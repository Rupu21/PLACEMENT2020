class Solution {
public:
    int divide(int dividend, int divisor) {
        int flag=0;
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
        if(dividend<(-2147483647) && divisor==-1)
            return (2147483647);
        else if(dividend<(-2147483647) && divisor==1)
            return (dividend);
        if(dividend<0){
            dividend=abs(dividend);
        }
        if(divisor<0){
            divisor=abs(divisor);
        }
        int result=dividend/divisor;
        return (sign * result);
        
    }
};