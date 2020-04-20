class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> c;
        map<int,int>::iterator it;
        for(int i=0;i<nums.size();i++)
            c[nums[i]]=i;
        for(int i=0;i<nums.size();i++){
            int d=target-nums[i];
            cout<<d;
            if((it=c.find(d))!=c.end() && i!=(*it).second)
            {
                vector<int> ans;
                ans.push_back((*it).second);
                ans.push_back(i);
                
                return ans;
            }
        }
        return nums;
    }
};