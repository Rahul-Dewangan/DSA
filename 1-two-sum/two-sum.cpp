class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> um;
        for(int i=0; i<n; i++){
            um[nums[i]] = i;
        }
        
        // sort(nums.begin(), nums.end());
        // int i = 0, j = n-1;
        for(int i = 0; i<n; i++){
            if(um.find(target - nums[i]) != um.end() && i != um[target - nums[i]]){
                vector<int> ans{i, um[target - nums[i]]};
                return ans;
            }
        }
        return {-1};
    }
};