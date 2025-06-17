class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size(), num;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(auto const &pos:mp){
            if(pos.second>1){
                num=pos.first;
            }
        }
        return num;
    }
};
