class Solution {
public:
    int myAtoi(string str) {
        long long int l=0,flag=0;
        int check=0;
        for(int i=0;i<str.length();i++){
            if(str.at(i)=='+' &&(i==0 || str.at(i-1)==' ')){
                if(flag!=0){
                    return 0;
                }
                check=1;
                flag+=2;
            }
           else  if(str.at(i)=='-' &&(i==0 || str.at(i-1)==' ')){
                if(flag!=0){
                    return 0;
                }
               check=1;
                flag+=1;
            }
            else if(str.at(i)>='0' && str.at(i)<='9'){
                l=l*10+(str.at(i)-'0');
                check=1;
                if(l> INT_MAX  && flag%2==0)
                    return INT_MAX;
                if(flag==1 && (l*(-1))<INT_MIN){
                    cout<<"here";
                    return INT_MIN;
                }
            }
            else if(str.at(i)==' '&& check==0 )
                continue;
            else break;
        }
        if(flag==1)
            l=l*(-1);
        return l;
    }
};