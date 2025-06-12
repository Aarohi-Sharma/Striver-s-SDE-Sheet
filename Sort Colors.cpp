class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        vector<int> count(3, 0);
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                count[0]++;
            }
            else if(nums[i]==1){
                count[1]++;
            }
            else count[2]++;
        }
        int j=0;
        for(int i=0; i<count.size(); i++){
            while(count[i]>0){
                nums[j]=i;
                j++;
                count[i]--;
            }
        }
    }
};
