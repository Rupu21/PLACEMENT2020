class Solution {
public:
    int reverse(int x) {
        int n=x;
        if(n<0)
            n=abs(x);
        long long int rev=0;
        while(n>0){
            rev=rev*10+(n%10);
            cout<<rev<<endl;
            n/=10;
        }
        if(rev>INT_MAX)
            return 0;
        if(x<0){
            rev=-rev;
            if(rev<INT_MIN)
                return 0;
        }
        return rev;
    }
};