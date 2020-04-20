class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size())
            nums1.swap(nums2);
       if(nums2.size()==0){
            if(nums1.size() & 1)
                return nums1[nums1.size()/2];
            else
                return (nums1[nums1.size()/2]+nums1[(nums1.size()/2)-1])/2.0;
        }
        if(nums1.size()==0){
            if(nums2.size()%2!=0)
                return nums2[nums2.size()/2];
            else
                return (nums2[nums2.size()/2]+nums2[(nums2.size()/2)-1])/2.0;
        }
        int n1=nums1.size();
        int n2=nums2.size();
        int low=0;
        int high=n1;
        while(low<=high){
            int num1part=(low+high)/2;
            int num2part=(n1+n2+1)/2 -num1part;
            if(num2part<0)
                num2part=0;
            cout<<num1part<<" "<<num2part<<endl;
            int maxLeftone=(num1part==0)?INT_MIN:nums1[num1part-1];
            int maxLefttwo=(num2part==0)?INT_MIN:nums2[num2part-1];
            int minLeftone=(num1part==n1)?INT_MAX:nums1[num1part];
            int minLefttwo=(num2part==n2)?INT_MAX:nums2[num2part];
            if(maxLeftone<=minLefttwo && maxLefttwo<=minLeftone){
               // cout<<n1;
                if((n1+n2)%2 !=0)
                    return (max(maxLeftone,maxLefttwo));
                else
                    return (max(maxLeftone,maxLefttwo)+min(minLeftone,minLefttwo))/2.0;
            }
            else if(maxLeftone>minLefttwo)
                high=num1part-1;
            else
                low=num1part+1;
        }
        return 0;
    }
};