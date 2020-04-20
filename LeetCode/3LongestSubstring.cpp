class Solution {
public:
    int max(int a,int b){
        return (a>b ? a:b);
    }
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1)
            return 1;
        set<char> c;
        int i=0,j=0;
        int ans=0;
        while(j<s.length()){
            if(c.find(s.at(j))==c.end()){
                c.insert(s.at(j));
                j++;
                ans=max(ans,c.size());
            }
            else{
                c.erase(s.at(i));
                i++;
            }
        }
        return ans;
    }
};