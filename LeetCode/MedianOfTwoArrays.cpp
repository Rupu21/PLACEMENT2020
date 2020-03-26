class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l=nums1.size()+nums2.size();
        int finalarray[l];
        double result=1.0;
        int i=0,k=0;
        for(i=0;i<nums1.size();i++){
            finalarray[i]=nums1[i];
        }
        for(;k<nums2.size();i++){
            finalarray[i]=nums2[k];
            k++;
        }
        sort(finalarray,finalarray+l);
        //cout<<l<<finalarray[2]<<endl;
        if(l % 2 !=0)
            result=finalarray[((l+1)/2)-1];
        else
            result=(finalarray[(l/2)-1]+finalarray[l/2])/2.0;
        return result;
        
    }
};