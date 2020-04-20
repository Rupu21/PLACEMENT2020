class Solution {
public:
    string convert(string s, int numRows) {
        if(s.length()==0)
            return "";
        if(s.length()<numRows || numRows==1)
            return s;
        string result="";
        int k=numRows-1;
        for(int i=0;i<=k;i++){
            result+=s.at(i);
            int temp=i,temp2=0;
           while(temp<s.length()){
               if(i!=k){
                    temp+=(k-i)*2;
                    if(temp<s.length() && temp>0 && temp!=i)
                        result+=s.at(temp);
                    if(i!=0){
                        temp+=(i*2);
                    if(temp<s.length() && temp>0 && temp!=i)
                        result+=s.at(temp);
                    }
                }
               else if(i==k){
                   if(i==0)
                       break;
                   temp+=(i*2);
                    if(temp<s.length() && temp>0 && temp!=i)
                        result+=s.at(temp);
               }
               }
            }
        return result;
    }
};