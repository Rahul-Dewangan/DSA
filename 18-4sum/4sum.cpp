class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> st;
        int n = nums.size();

        for(int i=0; i<n; i++){
            // if(i>1 && nums[i]==nums[i-2])continue;
            for(int j=i+1; j<n; j++){
                // if(j>0 && nums[j]==nums[j-1])continue;
                long long tar = static_cast<long>(target) - (static_cast<long>(nums[i]) + static_cast<long>(nums[j]));
                int lo = j+1, hi = n - 1;

                while (lo < hi) {
                    if(lo == j){
                        lo++;
                        continue;
                    }
                    if (nums[lo] + nums[hi] == tar ) {
                        vector<int> res = {nums[i], nums[j], nums[lo], nums[hi]};
                        sort(res.begin(), res.end());
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
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};