class Solution {
public:
    int reverse(int x) {
        int n=abs(x);
        long int rev=0;
        int t=0;
        while(n>0){
            t=n%10;
            rev=rev*10+t;
            n=n/10;
        }
        return (rev);
    }
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int rev_x=reverse(x);
        int n=x;
        while(n>0){
            if((n%10)==(rev_x%10)){
                n=n/10;
                rev_x=rev_x/10;
            }
            else{
                return false;
            }
        }
        return true;
    }
};