class Solution {
public:
    int reverse(int x) {
        if(x>2147483647)
            return 0;
        int sign=(x<0)?-1:1;
        int n=abs(x);
        long int rev=0;
        int t=0;
        while(n>0){
            t=n%10;
            rev=rev*10+t;
            n=n/10;
        }
        if(rev>2147483647)
            return 0;
        return (sign*rev);
    }
};