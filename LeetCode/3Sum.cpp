class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        if(nums.size()<3)
            return result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                if(r<nums.size()-1 && nums[r]==nums[r+1]){
                    r--;
                    continue;
                }
                if(nums[i]+nums[l]+nums[r]==0 ){
                    vector<int> temp(3);
                    temp[0]=nums[i];
                    temp[1]=nums[l];
                    temp[2]=nums[r];
                    result.push_back(temp);
                    l++;
                    r--;
                }
                else if(nums[i]+nums[l]+nums[r]<0)
                    l++;
                else
                    r--;
            }
        }
        return result;
    }
};