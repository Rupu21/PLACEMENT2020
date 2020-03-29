class Solution {
public:
    int getExpand(string s,int left,int right){
        if(s.length()==0||left>right)
            return 0;
        while(left>=0 && right <s.length() && s.at(left)==s.at(right)){
            left--;
            right++;
        }
        return right-left-1;
    }
    string longestPalindrome(string s) {
        if(s.length()<1)
            return "";
        int start=0,end=0;
        for(int i=0;i<s.length();i++){
            int l1=getExpand(s,i,i);
            int l2=getExpand(s,i,i+1);
            l1=(l1>l2)?l1:l2;
            if(l1> end-start){
                start=i-((l1-1)/2);
                end=i+(l1/2);
            }
        }
        string temp="";
        for(int i=start;i<=end;i++)
            temp+=s.at(i);
        return temp;
    }
};