class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++){
            int targ = target - nums[i];
            if (mp.find(targ) != mp.end()){
                return {i, mp[targ]};
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};