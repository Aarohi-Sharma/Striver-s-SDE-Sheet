class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        if(n==0) return 0;
        int last=INT_MIN;
        int count=0, longest=1;
        for(int i=0; i<n; i++){
            if(nums[i]-1==last){
                count+=1;
                last=nums[i];
            }
            else if(nums[i]!=last){
                count=1;
                last=nums[i];
            }
            longest=max(longest, count);
        }
        return longest;
    }
};
