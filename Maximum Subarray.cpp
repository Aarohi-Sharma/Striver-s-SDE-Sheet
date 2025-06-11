class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0], maxE=nums[0];
        for(int i=1; i<nums.size(); i++){
            maxE=max(maxE+nums[i], nums[i]);
            res=max(res, maxE);
        }
        return res;
    }
};
