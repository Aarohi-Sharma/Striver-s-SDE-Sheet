class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) sort(nums1.begin(), nums1.end());
        else if(m==0){
            for(int i=0; i<n; i++){
                nums1[i]=nums2[i];
            }
            sort(nums1.begin(), nums1.end());
        }
        else{
            int j=0;
            for(int i=m; i<m+n; i++){
                nums1[i]=nums2[j];
                j++;
            } 
            sort(nums1.begin(), nums1.end());
        }
    }
};
