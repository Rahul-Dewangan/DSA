class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> st;
        int n = nums.size();
        for (int i = 0; i < n-2; i++) {
            int tar = 0 - nums[i];
            int lo = i+1, hi = n - 1;
            if(i>0 && nums[i]==nums[i-1])continue;
            while (lo < hi ) {
                if (nums[lo] + nums[hi] == tar ) {
                    vector<int> res = {nums[i], nums[lo], nums[hi]};
                    // sort(res.begin(), res.end());
                    st.insert(res);
                    lo++; 
                    hi--;
                    while (lo < hi && nums[lo] == nums[lo - 1]) lo++;
                    while (lo < hi && nums[hi] == nums[hi + 1]) hi--;
                }
                else if(nums[lo] + nums[hi] < tar) lo++;
                else hi--;
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};