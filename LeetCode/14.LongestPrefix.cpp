class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        if(strs.size()==1)
            return strs[0];
        string ans="";
        set<char> c;
        int j=0;
        while(true){
            for(int i=0;i<strs.size();i++){
                if(strs[i]=="")
                    return "";
                if(j>=strs[i].length())
                    return ans;
                c.insert(strs[i].at(j));
                if(c.size()>1)
                    return ans;
            }
            ans+=strs[0].at(j);
            cout<<ans;
            c.clear();
            j++;
        }
        return ans;
    }
};