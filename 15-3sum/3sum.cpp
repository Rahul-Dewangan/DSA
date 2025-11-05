class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> st;
        int n = nums.size();
        for (int i = 0; i < n-2; i++) {
            int tar = 0 - nums[i];
            int lo = i+1, hi = n - 1;
            while (lo < hi ) {
                if (nums[lo] + nums[hi] == tar ) {
                    vector<int> res = {nums[i], nums[lo], nums[hi]};
                    // sort(res.begin(), res.end());
                    st.insert(res);
                    lo++; 
                    hi--;
                }
                else if(nums[lo] + nums[hi] < tar) lo++;
                else hi--;
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};