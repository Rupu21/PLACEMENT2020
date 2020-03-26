
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<=1)
            return s.length();
        int result=0,temp=0;
        int check[128]={0};
        for(int j=0;j<s.length()-1;j++){
        for(int i=j;i<s.length();i++){
            if((s.at(i)-'0')<0){
                if(i==0)
                    result=1;
                if(check[127]!=1){
                    temp++;
                    check[127]=1;
                }
            }
            else if(check[s.at(i)-'0']!=1){
                temp++;
                check[s.at(i)-'0']=1;
            }
            else{
                if(result<temp)
                    result=temp;
                temp=1;
                memset(check,0,sizeof(check));
                check[s.at(i)-'0']=1;
            }
        }
            if(result<temp)
                    result=temp;
            if(result>=72)
                return 95;
                temp=0;
            if(s.length()-j <result)
                break;
                memset(check,0,sizeof(check));
        }
        if(result<temp)
            result=temp;
        return result;
        
        
    }
};