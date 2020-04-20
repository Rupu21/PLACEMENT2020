class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sortlist(nums1.size()+nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), sortlist.begin());
         
        int len = nums1.size() + nums2.size();
        return (sortlist[(len+1)/2-1] + sortlist[(len+2)/2-1])/2.0;
    }
    
};