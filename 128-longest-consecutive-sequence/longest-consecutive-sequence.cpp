class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        
        unordered_set<int> set;
        int ans = 0;
        for(auto i: nums){
            set.insert(i);
        }
        for(auto i: set){
            if(set.find(i-1) == set.end()){
                int cnt = 1;
                int curr = i+1;
                while(set.find(curr) != set.end()){
                    cnt++;
                    curr++;
                }
                ans = max(ans, cnt);
            }
        }
        return ans;

    }
};